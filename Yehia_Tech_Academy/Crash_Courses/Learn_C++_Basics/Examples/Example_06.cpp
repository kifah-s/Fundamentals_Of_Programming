#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

// Definition.
class Car
{
private:
    // Properties.
    string brand;
    string model;
    int year;

public:
    // Default Constructor.
    Car()
    {
        brand = "-";
        model = "-";
        year = 2000;
    }
    
    Car(string brand, string model, int year)
    {
        setBrand(brand);
        setModel(model);
        setYear(year);
    }

    // Setters / Getters .. (Encapsulation).
    void setBrand(string b)
    {
        brand = b;
    }

    // string getBrand()
    // {
    //     return brand;
    // }

    void setModel(string m)
    {
        model = m;
    }

    // string getModel()
    // {
    //     return model;
    // }

    void setYear(int y)
    {
        year = y;
    }

    // int getYear()
    // {
    //     return year;
    // }

    // Methods.
    void displayInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "===============================" << endl;
    }

    ~Car(){
        // Clear resources.
    }
};

int main()
{
    WelcomeMessage();

    Car car1;
    car1.displayInfo();
    
    Car car2("BMW", "X5", 2020);
    car2.displayInfo();

    cout << endl
         << endl;

    return 0;
}