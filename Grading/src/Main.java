import java.util.Scanner;   // Includes the Scanner class to read input
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in); // Creates a scanner object that reads input
        System.out.print("Please enter your numeric grade: ");
        int value = input.nextInt();    // Reads input from the user
        Grade student = new Grade ();   // Object is created
        student.inputGrade(value);  // Grade is updated with the user's input
        student.determineGrade(value);  // Grade is determined from member value
    }
}