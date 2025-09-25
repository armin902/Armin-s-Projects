public class PercentageMarks
{
    private float totalMarksSweng311, totalMarksSweng411, totalMarksSweng431, totalMarksCmpsc221;
    private float obtainedMarksSweng311, obtainedMarksSweng411, obtainedMarksSweng431, obtainedMarksCmpsc221;
    private float totalMarks, obtainedMarks, percentageMarks;

    public PercentageMarks(float totalSweng311, float obtainedSweng311, float totalSweng411,
                           float obtainedSweng411, float totalSweng431, float obtainedSweng431,
                           float totalMarksCmpsc221, float obtainedMarksCmpsc221)   // Parameterized Constructor
    {
        this.totalMarksSweng311 = totalSweng311;
        this.totalMarksSweng411 = totalSweng411;
        this.totalMarksSweng431 = totalSweng431;
        this.totalMarksCmpsc221 = totalMarksCmpsc221;
        this.obtainedMarksSweng311 = obtainedSweng311;
        this.obtainedMarksSweng411 = obtainedSweng411;
        this.obtainedMarksSweng431 = obtainedSweng431;
        this.obtainedMarksCmpsc221 = obtainedMarksCmpsc221;
    }

    public void setValues(float totalSweng311, float obtainedSweng311, float totalSweng411,
                          float obtainedSweng411, float totalSweng431, float obtainedSweng431,
                          float totalCmpsc221, float obtainedCmpsc221)      // Input Method
    {
        this.totalMarksSweng311 = totalSweng311;
        this.totalMarksSweng411 = totalSweng411;
        this.totalMarksSweng431 = totalSweng431;
        this.totalMarksCmpsc221 = totalCmpsc221;
        this.obtainedMarksSweng311 = obtainedSweng311;
        this.obtainedMarksSweng411 = obtainedSweng411;
        this.obtainedMarksSweng431 = obtainedSweng431;
        this.obtainedMarksCmpsc221 = obtainedCmpsc221;
    }

    public void getValues()         // Output Method
    {
        System.out.println("Total marks of Sweng 311: " + this.totalMarksSweng311);
        System.out.println("Obtained marks of Sweng 311: " + this.obtainedMarksSweng311);
        System.out.println("Total marks of Sweng 411: " + this.totalMarksSweng411);
        System.out.println("Obtained marks of Sweng 411: " + this.obtainedMarksSweng411);
        System.out.println("Total marks of Sweng 431: " + this.totalMarksSweng431);
        System.out.println("Obtained marks of Sweng 431: " + this.obtainedMarksSweng431);
        System.out.println("Total marks of Cmpsc 221: " + this.totalMarksCmpsc221);
        System.out.println("Obtained marks of Cmpsc 431: " + this.obtainedMarksCmpsc221 + "\n");
    }

    public void computePercentage()
    {
        this.totalMarks = this.totalMarksSweng311 + this.totalMarksSweng411 + this.totalMarksSweng431 + this.totalMarksCmpsc221;
        this.obtainedMarks = this.obtainedMarksSweng311 + this.obtainedMarksSweng411 + this.obtainedMarksSweng431 + this.obtainedMarksCmpsc221;
        this.percentageMarks = this.obtainedMarks/this.totalMarks*100;
    }

    public void getPercentageMarks()
    {
        System.out.println("Total Marks: " + this.totalMarks);
        System.out.println("Total Obtained Marks: " + this.obtainedMarks);
        System.out.println("Percentage Marks: " + this.percentageMarks + "\n");
    }

    public float percentageComparison(PercentageMarks secondStudent)
    {
        if (this.percentageMarks > secondStudent.percentageMarks)
        {
            return this.percentageMarks;
        }
        else
        {
            return secondStudent.percentageMarks;
        }
    }

    public float sumOfObtainedMarks()
    {
        return obtainedMarksSweng311 + obtainedMarksSweng411 + obtainedMarksSweng431 + obtainedMarksCmpsc221;
    }

}
