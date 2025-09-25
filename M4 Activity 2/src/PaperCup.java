public class PaperCup implements Cup
{
    private boolean isFull;
    private boolean isDisposed;

    public PaperCup()     // Default Constructor
    {
        this.isFull = false;
        this.isDisposed = false;
    }

    public void displayPaperCupInfo()   // Output Method
    {
        System.out.println("Is the paper cup full: " + this.isFull);
        System.out.println("Is the paper cup disposed: " + this.isDisposed + "\n");
    }

    public void fillCup()
    {
        if (this.isDisposed == true)
        {
            System.out.println("You need a paper cup before you can fill anything up!");
        }
        else if (this.isFull == false)
        {
            this.isFull = true;
            System.out.println("The paper cup is filled up.");
        }
        else if (this.isFull == true)
        {
            System.out.println("The paper cup is already full!");
        }
    }


    public void drinkCup()
    {
        if (this.isDisposed == true)
        {
            System.out.println("You threw away your paper cup, you need a new one before you drink anything!");
        }
        else if (this.isFull == true)
        {
            System.out.println("You drank from the paper cup, and it is now empty.");
            this.isFull = false;
        }
        else if (this.isFull == false)
        {
            System.out.println("The paper cup is empty, you need to fill it up first.");
        }
    }


    public void disposeCup()
    {
        if (this.isDisposed == false)
        {
            this.isDisposed = true;
            this.isFull = false;
            System.out.println("You threw away the paper cup in the trash.");
        }
        else if (this.isDisposed == true)
        {
            System.out.println("You already threw away your paper cup.");
        }
    }

    public void getNewPaperCup()
    {
        if (this.isDisposed == false)
        {
            System.out.println("You still have a paper cup!");
        }
        else if (this.isDisposed == true)
        {
            this.isDisposed = false;
            this.isFull = false;
            System.out.println("You grabbed a new paper cup.");
        }
    }

}
