public class HotDogStand
{
    private int ID;
    private int hotDogsSold;

    public HotDogStand(int IDNum, int dogsSold)     // Parameterized Constructor
    {
        this.ID = IDNum;
        this.hotDogsSold = dogsSold;
    }

    public void justSold()      // Increments # of hot dogs sold by 1
    {
        this.hotDogsSold += 1;
    }

    public void getInfo()       // Output Method
    {
        System.out.println("ID: " + this.ID);
        System.out.println("# of hot dogs sold: " + this.hotDogsSold + "\n");
    }
}
