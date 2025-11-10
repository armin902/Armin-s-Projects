enum Ratings
{
    Excellent, Good, Fair;
}

public class MovieDVDs
{
    protected int ID;
    protected String title;
    protected Ratings movieRating;

    public MovieDVDs()
    {
        ID = 12345;
        title = "Cars";
        movieRating = Ratings.Excellent;
    }

    public MovieDVDs(int ID, String title, Ratings movieRatings)
    {
        this.ID = ID;
        this.title = title;
        this.movieRating = movieRatings;
    }

    public double computeFine(int totalMovie, int days)
    {
        return 0;
    }
}
