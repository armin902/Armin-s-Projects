public class Products
{
    private int productID;
    private String productDescription;
    private boolean productAvailability;
    private int quantity;
    private String units;
    private float unitPrice;


    public Products()     // Default Constructor
    {
        productID = 123;
        productDescription = "Milk";
        productAvailability = true;
        quantity = 10;
        units = "Gallon";
        unitPrice = 4f;
    }

    public Products(int ID, String desc, boolean available, int qty, String unit, float price)  // Parameterized Constructor
    {
        productID = ID;
        productDescription = desc;
        productAvailability = available;
        quantity = qty;
        units = unit;
        unitPrice = price;
    }

    public void getProduct()    // Output Method
    {
        System.out.println("\nProduct ID: "+productID);
        System.out.println("Product Description: "+productDescription);
        System.out.println("Product Is available: "+productAvailability);
        System.out.println("Quantity: "+quantity);
        System.out.println("Unit/Scale: "+units);
        System.out.println("Unit Price: "+unitPrice);
    }

    public void setProduct(int ID, String desc, boolean available, int qty, String unit, float price)   // Input Method
    {
        productID = ID;
        productDescription = desc;
        productAvailability = available;
        quantity = qty;
        units = unit;
        unitPrice = price;
    }

    public void Purchase(int qty, float uprice) // Purchase method
    {
        productAvailability = true;
        unitPrice = (quantity*unitPrice+qty*uprice)/(quantity+qty);
        quantity = quantity + qty;
    }

    public void Sale(int qty)   // Sale method
    {
        if (qty > quantity)
        {
            System.out.println("\nThe entered sale quantity is more than the existing quantity.");
        }

        quantity = quantity - qty;
        if (quantity <= 0)
        {
            productAvailability = false;
        }
    }

    public float inventoryCost()    // Implemented inventoryCost method
    {
        float cost = quantity * unitPrice;
        return cost;
    }

    public boolean checkAvailability()  // Boolean method
    {
        if (quantity <= 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

}

