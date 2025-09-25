public class Courses    // Member Class
{
    String courseName;
    int courseID; // exclusive
    int studentTakingID; // connected to college id
    String professorTeaching;
    boolean onlineClassOrNot;

    public Courses(String name, String prof, int courseID, int studentTakingID, boolean on)    // Parameterized Constructor
    {
        this.courseName = name;
        this.professorTeaching = prof;
        this.courseID = courseID;
        this.studentTakingID = studentTakingID;
        this.onlineClassOrNot = on;
    }

    public void coursesOutput()    // Output Method
    {
        System.out.println("Course name: " + this.courseName);
        System.out.println("Course ID: " + this.courseID);
        System.out.println("Professor: " + this.professorTeaching);
        System.out.println("Student taking the course's ID: " + this.studentTakingID);
        System.out.println("Online class option: " + this.onlineClassOrNot + "\n");
    }

    public void coursesInput(String name, String prof, int courseID, int studentTakingID, boolean on)  // Input Method
    {
        this.courseName = name;
        this.professorTeaching = prof;
        this.studentTakingID = studentTakingID;
        this.onlineClassOrNot = on;
        this.courseID = courseID;
    }
}
