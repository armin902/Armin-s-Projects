public class ActionDVD extends MovieDVDs
{
    public ActionDVD()
    {
        ID = 13579;
        title = "Mission Impossible";
        movieRating = Ratings.Excellent;
    }

    public ActionDVD(int ID, String title, Ratings movieRating)
    {
        super(ID, title, movieRating);
    }

    public double computeFine(int totalMovie, int days)
    {
        double fine = 4 * totalMovie * days;
        return fine;
    }
}
