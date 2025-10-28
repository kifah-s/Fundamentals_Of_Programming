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
public:
    // Properties.
    string brand;
    string model;
    int year;

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
    car1.brand = "Nissan";
    car1.model = "optima";
    car1.year = 2020;
    car1.displayInfo();

    cout << endl
         << endl;

    return 0;
}