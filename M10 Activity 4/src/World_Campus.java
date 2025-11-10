public class World_Campus implements World_Campus_Interface, GradeInterface
{
    private String name;
    private String email;
    private int ID;
    private boolean attendingZoom;
    private int gradeAverage;


    public World_Campus()
    {
        this.name = "Kim";
        this.email = "klm231@psu.edu";
        this.ID = 51020;
        this.attendingZoom = false;
        this.gradeAverage = 93;
    }

    public World_Campus(String name, String email, int ID, boolean attendingZoom, int gradeAverage)
    {
        this.name = name;
        this.email = email;
        this.ID = ID;
        this.attendingZoom = attendingZoom;
        this.gradeAverage = gradeAverage;
    }

    public void getInfo()
    {
        System.out.println(this.name);
        System.out.println(this.email);
        System.out.println(this.ID);
        System.out.println(this.attendingZoom);
    }

    public void setInfo(String name, String email, int ID, boolean attendingZoom, int gradeAverage)
    {
        this.name = name;
        this.email = email;
        this.ID = ID;
        this.attendingZoom = attendingZoom;
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
}
