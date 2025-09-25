public class CeramicCup implements Cup
{
    private boolean isFull;
    private boolean isBroken;
    private boolean isMicrowaved;

    public CeramicCup()     // Default Constructor
    {
        this.isFull = false;
        this.isBroken = false;
        this.isMicrowaved = false;
    }

    public void displayCeramicCupInfo()     // Output Method
    {
        System.out.println("Is the ceramic cup full: " + this.isFull);
        System.out.println("Is the ceramic cup broken: " + this.isBroken);
        System.out.println("Is the ceramic cup and its contents microwaved: " + this.isMicrowaved + "\n");
    }

    public void fillCup()
    {
        if (this.isBroken == true)
        {
            System.out.println("The ceramic cup is broken, get a new one to fill up!");
        }
       else if (this.isFull == false)
        {
            this.isFull = true;
            System.out.println("The ceramic cup is filled up.");
        }
        else
        {
            System.out.println("The ceramic cup is already full.");
        }
    }


    public void drinkCup()
    {
        if (this.isBroken == true)
        {
            System.out.println("You cannot drink from a broken ceramic cup, get a new one!");
        }
        else if (this.isFull == true)
        {
            System.out.println("You drank from the ceramic cup, and it is now empty.");
            this.isFull = false;
            this.isMicrowaved = false;
        }
        else
        {
            System.out.println("The ceramic cup is empty, you need to fill it up first!");
        }
    }

    public void microwaveCeramicCup()
    {
        if (this.isBroken == true)
        {
            System.out.println("You cannot microwave anything without a ceramic cup, get one first!");
        }
        else if (this.isFull == true && this.isBroken == false)
        {
            System.out.println("You microwaved the ceramic cup, making the contents hot.");
            this.isMicrowaved = true;
        }
        else if (this.isFull == false)
        {
            System.out.println("Fill up the ceramic cup first before you microwave it!");
        }
        else if (this.isMicrowaved == true)
        {
            System.out.println("The ceramic cup and its contents are already microwaved.");
        }
    }

    public void dropCup()
    {
        if (this.isBroken == true)
        {
            System.out.println("The ceramic cup is already broken, get a new one!");
        }
        else
        {
            this.isBroken = true;
            this.isFull = false;
            this.isMicrowaved = false;
            System.out.println("You dropped the ceramic cup...it is broken now.");
        }
    }

    public void pickNewGlass()
    {
        if (this.isBroken == false)
        {
            System.out.println("You already have a ceramic cup that is not broken!");
        }
        else
        {
            this.isBroken = false;
            this.isFull = false;
            this.isMicrowaved = false;
            System.out.println("You picked up a new ceramic cup.");
        }
    }
}
