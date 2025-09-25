import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
        Courses c1 = new Courses("MATH 220", "Dr. E", 100, 220, true);
        Courses c2 = new Courses("ENG 15" , "Prof. A", 101, 15, false);
        c2.coursesOutput();
        c2.coursesInput("ENG 15", "Prof. A", 100, 15, false);
        c2.coursesOutput();
        Courses c3 = new Courses("ENG 15", "Prof. A", 102, 15, false);

        Students s1 = new Students(220, 100, "Mike", false);
        Students s2 = new Students(15, 100, "Mike", false);
        Students s3 = new Students(15, 101, "Annie" , true);
        s3.studentsOutput();
        s3.studentsInput(15, 102, "Tom", true);
        s3.studentsOutput();

        List<Courses> crc = new ArrayList<Courses>();
        crc.add(c1);
        crc.add(c2);
        crc.add(c3);

        List<Students> std = new ArrayList<Students>();
        std.add(s1);
        std.add(s2);
        std.add(s3);

        StudentCourses sc = new StudentCourses(std, crc);
        sc.getStudentsFullInfo(100);
        sc.getStudentsFullInfo(102);
        sc.getCoursesFullInfo(220);
        sc.getCoursesFullInfo(15);
    }
}