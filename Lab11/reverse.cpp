/// Academic Integrity Affidavit:
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
// Name: Armin Rejaie
// Section: 003L
// Assignment: Lab11
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool is_palindrome(string word);
string reverse(string aSentence);

int main()
{
    string word, sentence, dummyStr, newSentence;
    bool decision;
    cout << "Please enter a word: ";
    cin >> word;
    decision = is_palindrome(word);
    

    if (decision == true)
    {
        cout << "This is a palindrome." << endl << endl;
    }
    else if (decision == false)
    {
        cout << "This is not a palindrome." << endl << endl;
    }

    cout << "Please enter a string below:" << endl;
    getline(cin, dummyStr);
    getline(cin, sentence);
    newSentence = reverse(sentence);
    cout << "Your modified string:" << endl;
    cout << newSentence;

    return 0;
}


bool is_palindrome(string word)
{
    int length = word.length() - 1;
    string reverse = word;
    int n = length;
   
   for (int i = 0; i < length; i++)
  {
       
      word[i] = tolower(word[i]);
  }

   for (int i = 0; i < length; i++, n--)
   {
       reverse[i] = word[n];
   }

   if (reverse == word)
   {
       return true;
   }

   else if (reverse != word)
   {
       return false;
   }
}


string reverse(string aSentence)
{
    int length = aSentence.length();

    for (int i = 0; i < length; i++)
    {
      if ((aSentence[i] != ' ') && (islower(aSentence[i])))
       {
           aSentence[i] = toupper(aSentence[i]);
       }
      else if ((aSentence[i] != ' ') && (isupper(aSentence[i])))
      {
          aSentence[i] = tolower(aSentence[i]);
      }

      if (aSentence[i] == ' ')
      {
          break;
      }

    }

    return aSentence;

}



/*
Please enter a word: Banana
This is not a palindrome.

Please enter a string below:
When the mailman came, I forgot to open the door.
Your modified string:
wHEN the mailman came, I forgot to open the door.
*/


/*
Please enter a word: Civic
This is a palindrome.

Please enter a string below:
pow! what a punch!
Your modified string:
POW! what a punch!
*/