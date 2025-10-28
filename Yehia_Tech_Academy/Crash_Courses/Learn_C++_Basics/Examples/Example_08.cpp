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

    string getBrand()
    {
        return brand;
    }

    void setModel(string m)
    {
        model = m;
    }

    string getModel()
    {
        return model;
    }

    void setYear(int y)
    {
        year = y;
    }

    int getYear()
    {
        return year;
    }

    // Methods.
    virtual void displayInfo()
    {
        cout << "Brand: " << getBrand() << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Year: " << getYear() << endl;
        cout << "===============================" << endl;
    }

    ~Car()
    {
        // Clear resources.
    }
};

// Inheritance.
class ElectricCar : public Car
{
private:
    int batteryCapacity;

public:
    ElectricCar(string brand, string model, int year, int batteryCapacity)
    {
        Car::setBrand(brand);
        Car::setModel(model);
        Car::setYear(year);
        setBatteryCapacity(batteryCapacity);
    }

    void setBatteryCapacity(int b)
    {
        batteryCapacity = b;
    }

    int getBatteryCapacity()
    {
        return batteryCapacity;
    }

    // Polymorphism (Override).
    void displayInfo() override {
        Car::displayInfo();
        cout << "Battery Capacity: " << getBatteryCapacity() << endl;
    }
};

int main()
{
    WelcomeMessage();

    Car car1;
    car1.displayInfo();

    Car car2("BMW", "X5", 2020);
    car2.displayInfo();

    ElectricCar eCar1("BMW", "X6", 2024, 1000);
    eCar1.displayInfo();

    cout << endl
         << endl;

    return 0;
}