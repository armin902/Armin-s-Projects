public class RunnerCup
{
    public static void main(String[] args)
    {
        PaperCup paperCup = new PaperCup();
        GlassCup glassCup = new GlassCup();
        CeramicCup ceramicCup = new CeramicCup();


// Paper cup testing
        paperCup.displayPaperCupInfo();
        paperCup.drinkCup();
        paperCup.fillCup();
        paperCup.drinkCup();
        paperCup.getNewPaperCup();
        paperCup.disposeCup();
        paperCup.getNewPaperCup();
        paperCup.fillCup();
        paperCup.displayPaperCupInfo();
        paperCup.disposeCup();
        paperCup.displayPaperCupInfo();
        System.out.print("\n");

// Glass cup testing
        glassCup.displayGlassCupInfo();
        glassCup.drinkCup();
        glassCup.microwaveGlassCup();
        glassCup.fillCup();
        glassCup.drinkCup();
        glassCup.fillCup();
        glassCup.microwaveGlassCup();
        glassCup.dropCup();
        glassCup.displayGlassCupInfo();
        glassCup.dropCup();
        glassCup.drinkCup();
        glassCup.pickNewGlass();
        glassCup.fillCup();
        glassCup.displayGlassCupInfo();
        System.out.print("\n");

// Ceramic cup testing
        ceramicCup.displayCeramicCupInfo();
        ceramicCup.drinkCup();
        ceramicCup.microwaveCeramicCup();
        ceramicCup.fillCup();
        ceramicCup.drinkCup();
        ceramicCup.fillCup();
        ceramicCup.microwaveCeramicCup();
        ceramicCup.dropCup();
        ceramicCup.displayCeramicCupInfo();
        ceramicCup.dropCup();
        ceramicCup.drinkCup();
        ceramicCup.pickNewGlass();
        ceramicCup.fillCup();
        ceramicCup.displayCeramicCupInfo();
        System.out.print("\n");
    }
}