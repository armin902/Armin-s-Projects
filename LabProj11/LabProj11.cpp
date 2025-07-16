// Academic Integrity Affidavit:
// I certify that this program code is my work.  Others may have
// assisted me with planning and concepts, but the code was written,
// solely, by me.
// I understand that submitting code that is totally or partially
// the product of other individuals is a violation of the Academic
// Integrity Policy and accepted ethical precepts. Falsified
// execution results are also results of improper activities. Such
// violations may result in zero credit for the assignment, reduced
// credit for the assignment, or course failure.
//
// Name: <Armin Rejaie>
// Section: <001>
// Assignment: LabProj11.cpp
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct TreeNode {
    string studentName;
    float averageGrade;
    int numCourses;
    TreeNode* left;
    TreeNode* right;
};
void Insert(TreeNode * &root, string studentName, float grade);
void PrintTree(TreeNode* root, ofstream& out);


void Insert(TreeNode*& root, string studentName, float grade)
{
    if (root == NULL)
    {
        root = new TreeNode;
        root->left = NULL;
        root->right = NULL;
        root->studentName = studentName;
        root->numCourses = 1;
        root->averageGrade = grade;
        return;
    }

    if (studentName < root->studentName)
    {
        Insert(root->left, studentName, grade);
    }
    else if (studentName > root->studentName)
    {
        Insert(root->right, studentName, grade);
    }
    else if (studentName == root->studentName)
    {
        root->averageGrade = (root->averageGrade * root->numCourses + grade) / (root->numCourses + 1);
        root->numCourses++;
        return;
    }
}


void PrintTree(TreeNode* root, ofstream& out)
{
    if (root != NULL)
    {
        PrintTree(root->left, out);
        out << root->studentName << " " << root->averageGrade << endl;
        PrintTree(root->right, out);
    }
}



int main()
{
    string inName;
    string outName;
   
    while (true)
    {
    TreeNode* root = NULL;
    cout << "Please type the text file name: ";
    cin >> inName;
    cout << "Please give the output text file name: ";
    cin >> outName;
    ifstream inputFile(inName);
    ofstream outputFile(outName);

    if (!inputFile || !outputFile)
    {
        cout << "Error opening files." << endl << endl;
    }
    else
    {
        string name, course;
        float grade;
        while (inputFile >> name >> course >> grade)
        {
            Insert(root, name, grade);
        }

        PrintTree(root, outputFile);

        cout << "You are done! You can open the file \"" << outName << "\" to check." << endl;
        cout << "Press any key to continue" << endl;
        cin.ignore();
        cin.get();
        cout << endl << endl;
    }
    inputFile.close();
    outputFile.close();
    }
    return 0;
}




/*
Please type the text file name: input.txt
Please give the output text file name: newsorted.txt
You are done! You can open the file "newsorted.txt" to check.
Press any key to continue
a


Please type the text file name: input.txtt
Please give the output text file name: work.txt
Error opening files.

Please type the text file name: s
*/

/*
newsorted.txt

Alex 70
Ben 75
Bob 70
Bruce 85
Carte 75
Charles 90
Eddy 35
Luke 85
Mike 80
Patric 30
Peter 95
Pique 55
*/