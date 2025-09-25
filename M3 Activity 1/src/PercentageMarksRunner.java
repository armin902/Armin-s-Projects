import java.util.Scanner;

public class PercentageMarksRunner
{
    public static void main(String[] args)
    {
        float total_sweng311, total_sweng411, total_sweng431, total_cmpsc221;
        float obtained_sweng311, obtained_sweng411, obtained_sweng431, obtained_cmpsc221;
        Scanner input = new Scanner(System.in);
        
        System.out.println("Enter Total marks of Sweng 311: ");
        total_sweng311 = input.nextFloat();
        while (total_sweng311 > 100 || total_sweng311 < 1)
        {
            System.out.println("Invalid input! Must be in the range 1-100.");
            System.out.println("Enter Total marks of Sweng 311: ");
            total_sweng311 = input.nextFloat();
        }

        System.out.println("Enter Obtained marks of Sweng 311: ");
        obtained_sweng311 = input.nextFloat();
        while (obtained_sweng311 > 100 || obtained_sweng311 < 1 || obtained_sweng311 > total_sweng311)
        {
            if (obtained_sweng311 > 100 || obtained_sweng311 < 1)
            {
                System.out.println("Invalid input! Must be in the range 1-100.");
                System.out.println("Enter Obtained marks of Sweng 311: ");
                obtained_sweng311 = input.nextFloat();
            }
            else
            {
                System.out.println("Invalid input! Obtained marks should be less than or equal to total marks!");
                System.out.println("Enter Obtained marks of Sweng 311: ");
                obtained_sweng311 = input.nextFloat();

            }
        }

        System.out.println("Enter Total marks of Sweng 411: ");
        total_sweng411 = input.nextFloat();
        while (total_sweng411 > 100 || total_sweng411 < 1)
        {
            System.out.println("Invalid input! Must be in the range 1-100.");
            System.out.println("Enter Total marks of Sweng 411: ");
            total_sweng411 = input.nextFloat();
        }

        System.out.println("Enter Obtained marks of Sweng 411: ");
        obtained_sweng411 = input.nextFloat();
        while (obtained_sweng411 > 100 || obtained_sweng411 < 1 || obtained_sweng411 > total_sweng411)
        {
            if (obtained_sweng411 > 100 || obtained_sweng411 < 1)
            {
                System.out.println("Invalid input! Must be in the range 1-100.");
                System.out.println("Enter Obtained marks of Sweng 411: ");
                obtained_sweng411 = input.nextFloat();
            }
            else
            {
                System.out.println("Invalid input! Obtained marks should be less than or equal to total marks!");
                System.out.println("Enter Obtained marks of Sweng 411: ");
                obtained_sweng411 = input.nextFloat();
            }
        }

        System.out.println("Enter Total marks of Sweng 431: ");
        total_sweng431 = input.nextFloat();
        while (total_sweng431 > 100 || total_sweng431 < 1)
        {
            System.out.println("Invalid input! Must be in the range 1-100.");
            System.out.println("Enter Total marks of Sweng 431: ");
            total_sweng431 = input.nextFloat();
        }

        System.out.println("Enter Obtained marks of Sweng 431: ");
        obtained_sweng431 = input.nextFloat();
        while (obtained_sweng431 > 100 || obtained_sweng431 < 1 || obtained_sweng431 > total_sweng431)
        {
            if (obtained_sweng431 > 100 || obtained_sweng431 < 1)
            {
                System.out.println("Invalid input! Must be in the range 1-100.");
                System.out.println("Enter Obtained marks of Sweng 431: ");
                obtained_sweng431 = input.nextFloat();
            }
            else
            {
                System.out.println("Invalid input! Obtained marks should be less than or equal to total marks!");
                System.out.println("Enter Obtained marks of Sweng 431: ");
                obtained_sweng431 = input.nextFloat();
            }
        }


        System.out.println("Enter Total marks of Cmpsc 221: ");
        total_cmpsc221 = input.nextFloat();
        while (total_cmpsc221 > 100 || total_cmpsc221 < 1)
        {
            System.out.println("Invalid input! Must be in the range 1-100.");
            System.out.println("Enter Total marks of Cmpsc 411: ");
            total_cmpsc221 = input.nextFloat();
        }

        System.out.println("Enter Obtained marks of Cmpsc 221: ");
        obtained_cmpsc221 = input.nextFloat();
        while (obtained_cmpsc221 > 100 || obtained_cmpsc221 < 1 || obtained_cmpsc221 > total_cmpsc221)
        {
            if (obtained_cmpsc221 > 100 || obtained_cmpsc221 < 1)
            {
                System.out.println("Invalid input! Must be in the range 1-100.");
                System.out.println("Enter Obtained marks of Cmpsc 221: ");
                obtained_cmpsc221 = input.nextFloat();
            }
            else
            {
                System.out.println("Invalid input! Obtained marks should be less than or equal to total marks!");
                System.out.println("Enter Obtained marks of Cmpsc 221: ");
                obtained_cmpsc221 = input.nextFloat();
            }
        }

        PercentageMarks student1 = new PercentageMarks(total_sweng311, obtained_sweng311,
                total_sweng411, obtained_sweng411, total_sweng431, obtained_sweng431, total_cmpsc221, obtained_cmpsc221);
        student1.getValues();
        student1.getPercentageMarks();
        student1.computePercentage();
        student1.getPercentageMarks();
        PercentageMarks student2 = new PercentageMarks(total_sweng311, obtained_sweng311,
                total_sweng411, obtained_sweng411, total_sweng431, obtained_sweng431, total_cmpsc221, obtained_cmpsc221);
        student2.getValues();
        student2.setValues(100,89,100,93,100,
                73, 100, 99);
        student2.getValues();
        student2.computePercentage();
        student2.getPercentageMarks();
        float comparison = student1.percentageComparison(student2);
        System.out.println("The highest percentage mark between the two students is: " + comparison);
        float sum = student1.sumOfObtainedMarks();
        System.out.println("The student's sum of obtained marks is: " + sum);
    }
}