public class LinearIntersectionRunner
{
    public static void main(String[] args)
    {
        LinearIntersection first = new LinearIntersection(2,6);
        LinearIntersection second = new LinearIntersection();
        second.inputVariables(3, 1);
        first.outputEquation();
        second.outputEquation();
        first.computeIntersectPoint(second);
        second.outputEquation();
        first.outputEquation();
        second.computeIntersectPoint(first);
        first.inputVariables(3,1);
        first.outputEquation();
        second.outputEquation();
        first.computeIntersectPoint(second);    // Displays infinite many points of intersection
        second.inputVariables(3,2);
        second.outputEquation();
        first.outputEquation();
        second.computeIntersectPoint(first);    // Displays no possible points of intersection
    }
}