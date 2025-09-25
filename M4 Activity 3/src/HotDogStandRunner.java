public class HotDogStandRunner
{
    public static void main(String[] args)
    {
        HotDogStand stand1 = new HotDogStand(75, 0);
        HotDogStand stand2 = new HotDogStand(76, 5);
        HotDogStand stand3 = new HotDogStand(77, 15);
        stand1.getInfo();
        stand1.justSold();
        stand2.justSold();
        stand3.justSold();
        stand3.justSold();
        stand1.getInfo();
        stand2.getInfo();
        stand3.getInfo();
    }
}