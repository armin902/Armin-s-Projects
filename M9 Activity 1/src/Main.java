public class Main
{
    public static void main(String[] args)
    {
        int actionMovieDVDs, comedyMovieDVDs, horrorMovieDVDs,
                actionDays, comedyDays, horrorDays;
        double actionFine = 0;
        double comedyFine = 0;
        double horrorFine = 0;
        double totalFine = 0;
        double discountedFine = 0;

        MovieDVDs movies1 = new MovieDVDs(15000, "Sound of Music", Ratings.Excellent);
        MovieDVDs movies2 = new MovieDVDs();
        movies2.computeFine(10, 14);
        ComedyDVD comedy1 = new ComedyDVD(43240, "Norbit", Ratings.Excellent);
        HorrorDVD horror1 = new HorrorDVD(34592, "Friday the 13th", Ratings.Good);
        ActionDVD action1 = new ActionDVD(99952, "Die Hard", Ratings.Fair);
        actionMovieDVDs = 2;
        comedyMovieDVDs = 2;
        horrorMovieDVDs = 2;
        actionDays = 5;
        comedyDays = 5;
        horrorDays = 5;

        int totalMovies = actionMovieDVDs + comedyMovieDVDs + horrorMovieDVDs;
        int totalDays = actionDays + comedyDays + horrorDays;



        totalFine = comedy1.computeFine(comedyMovieDVDs, comedyDays) + action1.computeFine(actionMovieDVDs, actionDays)
        + horror1.computeFine(horrorMovieDVDs, horrorDays);

        System.out.printf("(%.0f+%.0f+%.0f)",
                action1.computeFine(actionMovieDVDs, actionDays),
                comedy1.computeFine(comedyMovieDVDs, comedyDays),
                horror1.computeFine(horrorMovieDVDs, horrorDays));


        if (totalDays >= 3)
        {
            discountedFine = totalFine * 0.25;
            System.out.printf(" - (%.0f+%.0f+%.0f)*0.25",
                    action1.computeFine(actionMovieDVDs, actionDays),
                    comedy1.computeFine(comedyMovieDVDs, comedyDays),
                    horror1.computeFine(horrorMovieDVDs, horrorDays));
        }
        totalFine = totalFine - discountedFine;

        System.out.print(" = ");
        System.out.printf("%.1f", totalFine);
    }
}