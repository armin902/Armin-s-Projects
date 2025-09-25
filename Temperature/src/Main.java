import java.util.Scanner;   // Includes the Scanner class
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in); // Creates a scanner object to read input
        System.out.print("Please enter the temperature: ");
        int value = input.nextInt();    // Reads input from the user
        Temperature user = new Temperature ();   // Object is created
        user.inputTemperature(value);    // Temperature is updated by user's input value
        user.determineTemperature(value);  // Temperature is determined from member value
    }
}