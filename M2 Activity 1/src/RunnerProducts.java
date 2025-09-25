public class RunnerProducts
{
    public static void main(String[] args)
    {
        float inventoryCost;
        Products p1 = new Products();
        p1.getProduct();
        p1.checkAvailability();
        p1.Purchase(10,3.9f);
        p1.getProduct();
        p1.Sale(5);
        p1.Sale(100);
        p1.getProduct();
        p1.setProduct(345, "Juice", true, 20, "Packets", 2.40f);
        p1.getProduct();
        inventoryCost = p1.inventoryCost();
        System.out.println("Inventory Cost: " + inventoryCost);
    }
}