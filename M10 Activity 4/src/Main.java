public class Main
{
    public static void main(String[] args)
    {
        In_Person mike = new In_Person("Mike", "mkf123@psu.edu", 12356, false,
                false, 77);
        In_Person john = new In_Person();

        World_Campus bill = new World_Campus("Bill" , "bwl603@psu.edu", 91205, false, 83);
        World_Campus kim = new World_Campus();

        mike.Get_grade();
        mike.Attend_In_Perosn_Meeting();
        mike.Attend_In_Perosn_Meeting();
        mike.Attend_Zoom_Meeting();
        mike.getInfo();
        john.Get_grade();
        john.Attend_Zoom_Meeting();
        john.Attend_Zoom_Meeting();
        john.setInfo("John", "jnh123@psu.edu", 15302, true, true, 83);
        john.Attend_In_Perosn_Meeting();
        john.getInfo();         // In_Person realization
        System.out.println();

        bill.Get_grade();
        bill.getInfo();
        bill.Attend_Zoom_Meeting();
        bill.setInfo("Bill" , "bwl603@psu.edu", 91205, true, 83);
        bill.Attend_Zoom_Meeting();
        kim.Get_grade();
        kim.Attend_Zoom_Meeting();
        kim.Attend_Zoom_Meeting();
        kim.getInfo();      // World_Campus realization
    }
}