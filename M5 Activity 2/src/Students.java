public class Students   // Member Class
{
    String studentName;
    int studentID; // exclusive
    int collegeID; // connected to studentTakingID
    boolean onCampusOrOff;

    public Students(int ID, int collID, String n, boolean on)  // Parameterized Constructor
    {
        this.studentID = ID;
        this.collegeID = collID;
        this.studentName = n;
        this.onCampusOrOff = on;
    }

    public void studentsOutput()    // Output Method
    {
        System.out.println("Student ID: " + this.studentID);
        System.out.println("Student name: " + this.studentName);
        System.out.println("Student's college ID: " + this.collegeID);
        System.out.println("On-Campus student: " + this.onCampusOrOff + "\n");
    }

    public void studentsInput(int ID, int collID, String n, boolean on)  // Input Method
    {
        this.studentID = ID;
        this.collegeID = collID;
        this.studentName = n;
        this.onCampusOrOff = on;
    }
}
