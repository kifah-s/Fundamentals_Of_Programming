
//* Class Car Program (Version 2).

/*
* Create a program with a class Car that has private members make, model, and year.
* Implement public methods setDetails to set car details and displayInfo to display the car information.

! Output:
! Make: Toyota
! Model: Camry
! Year: 2022
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
    string getMake()
    {
        return make;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Car Program (Version 2) ..\n"
         << endl;
}

// Car Details - Function.
void carDetailsFun()
{
    Car car_1;
    car_1.setMake("Toyota");
    car_1.setModel("Camry");
    car_1.setYear(2022);

    string make = car_1.getMake();
    string model = car_1.getModel();
    int year = car_1.getYear();

    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
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
