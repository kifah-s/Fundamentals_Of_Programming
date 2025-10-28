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
    // Setters , Getters.
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
    }
};

int main()
{
    WelcomeMessage();

    Car car1;
    car1.setBrand("Nissan");
    car1.setModel("Patrol");
    car1.setYear(2020);
    car1.displayInfo();

    cout << endl
         << endl;

    return 0;
}