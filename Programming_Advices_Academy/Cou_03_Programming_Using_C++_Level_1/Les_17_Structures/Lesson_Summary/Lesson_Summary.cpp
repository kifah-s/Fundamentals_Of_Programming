#include <iostream>

using namespace std;

//* Structs

// struct Person
// {
//     string name = "";
//     short age = 0;
// };

// struct Car
// {
//     string brand;
//     string model;
//     int year;
// };

struct stAddress
{
    string country;
};


struct stCarOwner
{
    string name;
    string phone;
    short age;
    stAddress address;
};

struct stCar
{
    string brand;
    string model;
    int year;

    stCarOwner owner;
};

//* End Structs

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    // Person p1;
    // p1.name = "kifah saloum";
    // p1.age = 24;
    // cout << "Name: " << p1.name << endl;
    // cout << "age: " << p1.age << endl;

    // Car myCar1, myCar2;
    // myCar1.brand = "BMW";
    // myCar1.model = "X6";
    // myCar1.year = 2022;

    // myCar2.brand = "Ford";
    // myCar2.model = "Musting";
    // myCar2.year = 2024;

    // cout << "My Car 1 Brand: " << myCar1.brand << endl;
    // cout << "My Car 1 Model: " << myCar1.model << endl;
    // cout << "My Car 1 Year: " << myCar1.year << endl;

    // cout << "My Car 2 Brand: " << myCar2.brand << endl;
    // cout << "My Car 2 Model: " << myCar2.model << endl;
    // cout << "My Car 2 Year: " << myCar2.year << endl;

    stCar myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X6";
    myCar1.year = 2022;
    myCar1.owner.name = "Kifah saloum";
    myCar1.owner.phone = "00963998621421";
    myCar1.owner.age = 24;
    myCar1.owner.address.country = "Syria";

    cout << "My Car 1 Brand: " << myCar1.brand << endl;
    cout << "My Car 1 Model: " << myCar1.model << endl;
    cout << "My Car 1 Year: " << myCar1.year << endl;
    cout << "My Car 1 \"Owner Name\": " << myCar1.owner.name << endl;
    cout << "My Car 1 \"Owner Phone\": " << myCar1.owner.phone << endl;
    cout << "My Car 1 \"Owner Age\": " << myCar1.owner.age << endl;
    cout << "My Car 1 \"Owner Address\": " << myCar1.owner.address.country << endl;

    cout << endl
         << endl;

    return 0;
}