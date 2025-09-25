public class GlassCup implements Cup
{
    private boolean isFull;
    private boolean isBroken;
    private boolean isMicrowaved;

    public GlassCup()   // Default Constructor
    {
        this.isFull = false;
        this.isBroken = false;
        this.isMicrowaved = false;
    }

    public void displayGlassCupInfo()   // Output Method
    {
        System.out.println("Is the glass cup full: " + this.isFull);
        System.out.println("Is the glass cup broken: " + this.isBroken);
        System.out.println("Is the glass cup and its contents microwaved: " + this.isMicrowaved + "\n");
    }

    public void fillCup()
    {
        if (this.isBroken == true)
        {
            System.out.println("The glass cup is broken, get a new one!");
        }
        else if (this.isFull == false)
        {
            this.isFull = true;
            System.out.println("The glass cup is filled up.");
        }
        else if (this.isFull == true)
        {
            System.out.println("The glass cup is already full.");
        }
    }

    public void drinkCup()
    {
        if (this.isBroken == true)
        {
            System.out.println("The glass cup is broken, get a new one to drink out of!");
        }
        else if (this.isFull == true)
        {
            System.out.println("You drank from the glass cup, and it is now empty.");
            this.isFull = false;
            this.isMicrowaved = false;
        }
        else
        {
            System.out.println("The glass cup is empty, you need to fill it up first!");
        }
    }

    public void microwaveGlassCup()
    {
        if (this.isBroken == true)
        {
            System.out.println("You cannot microwave anything without a glass cup, get one first!");
        }
        else if (this.isFull == true && this.isBroken == false)
        {
            System.out.println("You microwaved the glass cup, making the contents hot.");
            this.isMicrowaved = true;
        }
        else if (this.isFull == false)
        {
            System.out.println("Fill up the glass cup first before you microwave it!");
        }
        else if (this.isMicrowaved == true)
        {
            System.out.println("The glass cup and its contents are already microwaved.");
        }
    }

    public void dropCup()
    {
        if (this.isBroken == true)
        {
            System.out.println("The glass cup is already broken, get a new one!");
        }
        else
        {
            this.isBroken = true;
            this.isFull = false;
            this.isMicrowaved = false;
            System.out.println("You dropped the glass cup...it is broken now.");
        }
    }

    public void pickNewGlass()
    {
        if (this.isBroken == false)
        {
            System.out.println("You already have a glass cup that is not broken!");
        }
        else
        {
            this.isBroken = false;
            this.isFull = false;
            this.isMicrowaved = false;
            System.out.println("You picked up a new glass cup.");
        }
    }

}
