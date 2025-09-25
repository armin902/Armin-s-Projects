import java.util.*;

public class Teacher
{
    private String name;
    private int ID;
    private Office ofc;
    private List<PC> pc;

    public Teacher(String n, int ID, Office ofc, List<PC> pc)    // Parameterized Constructor
    {
        this.name = n;
        this.ID = ID;
        this.ofc = ofc;
        this.pc = pc;
    }

    public void getTeacherInfo()
    {
        System.out.println("Teacher name: " + this.name);
        System.out.println("Teacher ID: " + this.ID);
        this.ofc.getOfficeInfo();
        for(PC p: pc)
        {
            System.out.println("PC Number: " + p.getPCNumber(name));
        }
        System.out.println("\n");
    }


}
