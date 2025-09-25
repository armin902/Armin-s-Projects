import java.util.*;

public class StudentCourses     // Container Class
{
    private List<Students> std;
    private List<Courses> crc;

    public StudentCourses(List<Students> s, List<Courses> c)
    {
        this.std = s;
        this.crc = c;
    }

    public void getStudentsFullInfo(int ID)      // Function that identities a specific student and displays all their courses
    {
        for (int i = 0; i < std.size(); i++)
        {
            if (std.get(i).collegeID == ID)
            {
                System.out.println("Student ID: " + std.get(i).studentID);
                System.out.println("Student name: " + std.get(i).studentName);
                System.out.println("On-Campus student: " + std.get(i).onCampusOrOff);
                break;
            }
        }

        System.out.println("Course list: ");
        for (int i = 0; i < crc.size(); i++)
        {
            if (crc.get(i).courseID == ID)
            {
                System.out.println(crc.get(i).courseName);
            }
        }
        System.out.println("\n");
    }

    public void getCoursesFullInfo(int ID)      // Function that identities a specific class and displays all their students
    {
        for (int i = 0; i < crc.size(); i++)
        {
            if (crc.get(i).studentTakingID == ID)
            {
                System.out.println("Course name: " + crc.get(i).courseName);
                System.out.println("Professor: " + crc.get(i).professorTeaching);
                System.out.println("Student taking the course's ID: " + crc.get(i).studentTakingID);
                System.out.println("Online class option: " + crc.get(i).onlineClassOrNot);
                break;
            }
        }

        System.out.println("Student list: ");
        for (int i = 0; i < std.size(); i++)
        {
            if (std.get(i).studentID == ID)
            {
                System.out.println(std.get(i).studentName);
            }
        }
        System.out.println("\n");
    }
}

// Create an ID or something that will be shared amongst the students and the courses
