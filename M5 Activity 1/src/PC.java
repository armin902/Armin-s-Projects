public class PC
{
    private int pcNum;
    private String pcOwnerName;

    public PC(int pcNum, String ownerName)     // Parameterized Constructor
    {
        this.pcNum = pcNum;
        this.pcOwnerName = ownerName;
    }

    public void setPCInfo(int pcNum, String ownerName)     // Input Method
    {
        this.pcNum = pcNum;
        this.pcOwnerName = ownerName;
    }

    public void getPCInfo()     // Output Method
    {
        System.out.println("PC Number: " + this.pcNum);
    }

    public int getPCNumber(String name)
    {
        if(this.pcOwnerName.equals(name))
        {
            return pcNum;
        }
        else
        {
            return 0;
        }
    }
}
