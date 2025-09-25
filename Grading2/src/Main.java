import java.util.Scanner; // Includes the Scanner class

public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in); // Creates a scanner object that reads input
        System.out.print("Please enter your numeric grade: ");
       int grade = input.nextInt();    // Reads input from the user

        if (grade >= 91 && grade <= 100)        // Nested if-statements to determine letter grade
        {
            System.out.println("The student's grade is A.");
        }
        else if (grade >= 81 && grade <= 90)
        {
            System.out.println("The student's grade is B");
        }
        else if (grade >= 71 && grade <= 80)
        {
            System.out.println("The student's grade is C");
        }
        else if (grade >= 61 && grade <= 70)
        {
            System.out.println("The student's grade is D");
        }
        else if (grade >= 50 && grade <= 60)
        {
            System.out.println("The student's grade is E");
        }
        else if (grade < 50 && grade >= 0)
        {
            System.out.println("The student's grade is F");
        }
        else
        {
            System.out.println("Invalid value!");
        }
    }
}