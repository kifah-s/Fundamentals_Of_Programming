
//* Class Vehicle Program (Version 1).

/*
* Create a base class Vehicle with a method start to display "Vehicle started",
* Derive a class Car from Vehicle with a method drive to display "Car is being driven".

! Output:
! Vehicle started.
! Car is being driven.
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
class Vehicle
{
public:
    void start()
    {
        cout << "Vehicle started." << endl;
    }
};

class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Car is being driven." << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Vehicle Program (Version 1) ..\n"
         << endl;
}

// Vehicle - Function.
void vehicleFun()
{
    Car myCar_1;
    myCar_1.start();
    myCar_1.drive();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    vehicleFun();

    cout << "\n"
         << endl;
}
//* End Function ..
