public class Office
{
    private String officeNumber;
    private String departmentProfession;

    public Office(String officeNum, String departmentProf)  // Parameterized Constructor
    {
        this.officeNumber = officeNum;
        this.departmentProfession = departmentProf;
    }

    public void setOfficeInfo(String officeNum, String departmentProf)
    {
        this.officeNumber = officeNum;
        this.departmentProfession = departmentProf;
    }

    public void getOfficeInfo()   // Output Method
    {
        System.out.println("Office Number: " + this.officeNumber);
        System.out.println("Department of Profession: " + this.departmentProfession);
    }

}
