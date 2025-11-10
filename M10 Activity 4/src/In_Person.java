public class In_Person implements GradeInterface, In_Perosn_Interface, World_Campus_Interface
{
    private String name;
    private String email;
    private int ID;
    private boolean attendingZoom;
    private boolean attendingInPerson;
    private int gradeAverage;


    public In_Person()
    {
        this.name = "John";
        this.email = "jnh120@psu.edu";
        this.ID = 90023;
        this.attendingZoom = false;
        this.attendingInPerson = false;
        this.gradeAverage = 80;
    }

    public In_Person(String name, String email, int ID, boolean attendingZoom, boolean attendingInPerson, int gradeAverage)
    {
        this.name = name;
        this.email = email;
        this.ID = ID;
        this.attendingZoom = attendingZoom;
        this.attendingInPerson = attendingInPerson;
        this.gradeAverage = gradeAverage;
    }

    public void getInfo()
    {
        System.out.println(this.name);
        System.out.println(this.email);
        System.out.println(this.ID);
        System.out.println(this.attendingZoom);
        System.out.println(this.attendingInPerson);
    }

    public void setInfo(String name, String email, int ID, boolean attendingZoom, boolean attendingInPerson, int gradeAverage)
    {
        this.name = name;
        this.email = email;
        this.ID = ID;
        this.attendingZoom = attendingZoom;
        this.attendingInPerson = attendingInPerson;
        this.gradeAverage = gradeAverage;
    }

    public void Get_grade()
    {
        System.out.println("Grade Average: " + gradeAverage);
    }

    public void Attend_Zoom_Meeting()
    {
        if (attendingZoom == false)
        {
            attendingZoom = true;
            System.out.println("Student is attending the Zoom meeting.");
        }
        else
        {
            System.out.println("Student is already attending the Zoom meeting.");
        }
    }

    public void Attend_In_Perosn_Meeting()
    {
        if (attendingInPerson == false)
        {
            attendingInPerson = true;
            System.out.println("Student is attending the in-person meeting.");
        }
        else
        {
            System.out.println("Student is already attending the in-person meeting.");
        }
    }
}
