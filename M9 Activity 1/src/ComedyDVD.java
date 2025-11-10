public class ComedyDVD extends MovieDVDs
{
    public ComedyDVD()
    {
        ID = 24680;
        title = "Elf";
        movieRating = Ratings.Good;
    }

    public ComedyDVD(int ID, String title, Ratings movieRating)
    {
        super(ID, title, movieRating);
    }

    public double computeFine(int totalMovie, int days)
    {
        double fine = 6 * totalMovie * days;
        return fine;
    }
}
