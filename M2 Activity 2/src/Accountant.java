public class Accountant
{
    private String name;
    private int age;
    private String companyName;

    public Accountant(String n, int a, String c)    // Parameterized Constructor
    {
        name = n;
        age = a;
        companyName = c;
    }

    public void printSalary()   // Calculates salary
    {
        float salary = (float) (40000 * Math.sqrt(Math.exp(0.04295 * age + 0.141)));
        String formatted = String.format("%.2f", salary);   // Displays only 2 digits after the decimal point
        System.out.println("The accountant's salary is: $" +formatted);
    }

    public void displayInfo()   // Output method
    {
        System.out.print("Name: "+name);
        System.out.print(",   Age: "+age);
        System.out.print(",   Company Name: " +companyName);
    }

}
