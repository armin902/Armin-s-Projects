public class Temperature
{
    int temperature;

    public void inputTemperature(int input)       // User declares grade
    {
        temperature = input;
    }

    public void determineTemperature(int temperature)   // Class determines temperature
    {
        if (temperature > 40)
        {
            System.out.println("The temperature is very hot!");
        }
        else if (temperature >= 31 && temperature <= 40)
        {
            System.out.println("The temperature is hot.");
        }
        else if (temperature >= 16 && temperature <= 30)
        {
            System.out.println("The temperature is warm.");
        }
        else if (temperature <= 15 && temperature >= 0)
        {
            System.out.println("The temperature is cold.");
        }
        else if (temperature < 0)
        {
            System.out.println("The temperature is freezing!");
        }
        else
        {
            System.out.println("Invalid value!");
        }
    }

}
