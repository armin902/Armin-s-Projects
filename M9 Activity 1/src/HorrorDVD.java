public class HorrorDVD extends MovieDVDs
{
    public HorrorDVD()
    {
        ID = 35814;
        title = "Scream";
        movieRating = Ratings.Fair;
    }

    public HorrorDVD(int ID, String title, Ratings movieRating)
    {
        super(ID, title, movieRating);
    }

    public double computeFine(int totalMovie, int days)
    {
        double fine = 7 * totalMovie * days;
        return fine;
    }
}
