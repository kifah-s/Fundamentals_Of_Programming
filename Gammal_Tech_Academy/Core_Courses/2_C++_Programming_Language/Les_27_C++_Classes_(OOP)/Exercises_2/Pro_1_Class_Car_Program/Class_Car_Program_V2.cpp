
//* Class Car Program (Version 2).

/*
* Create a program that defines a class called Car,
* The class should have a private member variable speed adding a public method setSpeed to the Car class.
* Use this method to set the speed to 60 and then print it.

! Output:
! Speed: 60 mph
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
    int speed;

public:
    void setSpeed(int s)
    {
        speed = s;
    }

    void getSpeed()
    {
        cout << "Speed: " << speed << " mph.";
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

// Print Speed - Function.
void printSpeedFun()
{
    Car car1;
    car1.setSpeed(60);
    car1.getSpeed();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    printSpeedFun();

    cout << "\n"
         << endl;
}
//* End Function ..
