import java.util.Scanner;
public class myProg
{
    public static void main(String[] args)
    {
    String name, companyName;
    int age;
        Scanner input = new Scanner(System.in);
        System.out.print("Please enter your name: ");
        name = input.next();
        System.out.print("Please enter your age: ");
        age = input.nextInt();
        while (age < 0) // Input validation
        {
            System.out.println("Invalid age!");
            System.out.print("Please enter your age: ");
            age = input.nextInt();
        }
        System.out.print("Please enter your company's name: ");
        companyName = input.next();
        Accountant acct1 = new Accountant(name,age,companyName);
        acct1.printSalary();
        acct1.displayInfo();
    }
}