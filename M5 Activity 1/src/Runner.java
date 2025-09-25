import java.util.*;

public class Runner
{
    public static void main(String[] args)
    {
        Office ofc1 = new Office("200", "School of Engineering");
        PC pc1 = new PC(101, "Mary");
        List<PC> pcL1 = new ArrayList<PC>();
        pcL1.add(pc1);
        Teacher t1 = new Teacher("Mary", 100, ofc1, pcL1);
        t1.getTeacherInfo();
        PC pc2 = new PC(102, "Mary");
        pcL1.add(pc2);
        t1.getTeacherInfo();
        pc1.getPCInfo();
        pc1.setPCInfo(105, "Mary");
        t1.getTeacherInfo();

        Office ofc2 = new Office("201", "Hamilton");
        PC pc3 = new PC(103, "Mary");
        List<PC> pcL2 = new ArrayList<PC>();
        pcL2.add(pc3);
        Teacher t2 = new Teacher("Hamilton", 101, ofc2, pcL2);
        t2.getTeacherInfo();
        PC pc4 = new PC(104, "Hamilton");
        pcL2.add(pc4);
        t2.getTeacherInfo();
        ofc2.getOfficeInfo();
        ofc2.setOfficeInfo("210", "Hamilton");
        t2.getTeacherInfo();

        int num = pc3.getPCNumber("Hamilton");
        System.out.println(num);
        pc3.setPCInfo(103, "Hamilton");
        t2.getTeacherInfo();



    }
}





// 1 Teacher can have multiple PCs