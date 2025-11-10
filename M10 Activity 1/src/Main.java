public class Main
{
    public static void main(String[] args)
    {
        In_Person mike = new In_Person("Mike", "mkf123@psu.edu", 12356, false,
                false, 77);
        In_Person john = new In_Person();

        World_Campus bill = new World_Campus("Bill" , "bwl603@psu.edu", 91205, false,
                false, 83);
        World_Campus kim = new World_Campus();

        mike.Get_grade();
        mike.Attend_In_Perosn_Meeting();
        mike.Attend_In_Perosn_Meeting();
        mike.setInfo("Mike", "mkf123@psu.edu", 23040, false,
                false, 77);
        mike.getInfo();
        mike.Attend_Zoom_Meeting();
        john.Get_grade();
        john.getInfo();
        john.Attend_Zoom_Meeting();
        john.Attend_Zoom_Meeting();
        john.Attend_In_Perosn_Meeting();
        john.getInfo();         // In_Person realization
        System.out.println();

        bill.Get_grade();
        bill.Attend_In_Perosn_Meeting();
        bill.Attend_In_Perosn_Meeting();
        bill.setInfo("Bill" , "bwl603@psu.edu", 91205, true,
                true, 83);
        bill.Attend_Zoom_Meeting();
        kim.Get_grade();
        kim.Attend_Zoom_Meeting();
        kim.Attend_Zoom_Meeting();
        kim.Attend_In_Perosn_Meeting();         // World_Campus realization
    }
}