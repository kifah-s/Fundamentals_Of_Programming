
//* Class Car 2 Program (Version 1).

/*
* Extend the previous program to add a public method checkAge that determines if the car is considered old (more than 10 years old) or not.

! Output:
! Make: Toyota
! Model: Camry
! Year: 2010
! This car is considred old.
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Classes ..
class Car
{
private:
    string make, model;
    int year = 0;

public:
    // Setter.
    void setMake(string ma)
    {
        make = ma;
    }

    void setModel(string mo)
    {
        model = mo;
    }

    void setYear(int ye)
    {
        year = ye;
    }

    // Getter
    void getMake()
    {
        cout << "Make: " << make << endl;
    }

    void getModel()
    {
        cout << "Model: " << model << endl;
    }

    void getYear()
    {
        cout << "Year: " << year << endl;
    }

    void checkAge()
    {
        if ((2025 - year) > 10)
        {
            cout << "This car is considered old." << endl;
        }
        else
        {
            cout << "This car is not considered old." << endl;
        }
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Car 2 Program (Version 1) ..\n"
         << endl;
}

// Car Details - Function.
void carDetailsFun()
{
    Car car_1;
    car_1.setMake("Toyota");
    car_1.setModel("Camry");
    car_1.setYear(2010);

    car_1.getMake();
    car_1.getModel();
    car_1.getYear();
    car_1.checkAge();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();
    carDetailsFun();

    cout << "\n"
         << endl;
}
//* End Function ..
