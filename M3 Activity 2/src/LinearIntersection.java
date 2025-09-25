public class LinearIntersection
{
    private float slope;
    private float yIntercept;

    public LinearIntersection() // Default Constructor
    {
        slope = 0;
        yIntercept = 0;
    }

    public LinearIntersection(float slope, float yIntercept)    // Parameterized Constructor
    {
        this.slope = slope;
        this.yIntercept = yIntercept;
    }

    public void inputVariables(float slope, float yIntercept)   // Input Method
    {
        this.slope = slope;
        this.yIntercept = yIntercept;
    }

    public void outputEquation()    // Output Method
    {
        System.out.println("Slope = " + slope);
        System.out.println("Y-intercept = " + yIntercept);
        System.out.println("Equation: y = " + slope + "x + " + yIntercept + "\n");
    }


    public void computeIntersectPoint(LinearIntersection secondLine)    // Determines the intersection point between two lines
    {
        float xPoint = 0;
        float yPoint = 0;

        if (this.slope == secondLine.slope && this.yIntercept == secondLine.yIntercept)     // Infinitely many points of intersection
        {
            System.out.println("(-Infinity" + ", " + "Infinity)\n");
            return;
        }
        else if (this.slope == secondLine.slope)        // No possible points of intersection
        {
            System.out.println("The lines are parallel and will never intersect.\n");
            return;
        }

        xPoint = this.slope - secondLine.slope;
        xPoint = (secondLine.yIntercept - this.yIntercept) / xPoint;            // These two lines of code determine the X-point
        yPoint = (this.slope * xPoint) + this.yIntercept;                       // Plug the x value into original equation to determine Y-point
        System.out.println("Point of intersection: (" + xPoint + ", " + yPoint + ")\n");
    }
}
