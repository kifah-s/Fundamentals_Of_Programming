
//* Class Circle 2 Program (Version 1).

/*
* Extend the previous program to add a public method calculate Circumference to calculate and print the circumference.

! Output:
! Area: 50.24
! Circumference: 25.12
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
class Circle
{
private:
    float radius, area, circumference;

public:
    void setRadius(float rad)
    {
        radius = rad;
    }

    void getArea()
    {
        area = (radius * radius) * 3.14;

        cout << "Area: " << area << endl;
    }

    void getCircumference()
    {
        circumference = radius * 3.14 * 2;

        cout << "Circumference: " << circumference << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Circle 2 Program (Version 1) ..\n"
         << endl;
}

// Print Area - Function.
void printAreaFun()
{
    Circle circle_1;
    circle_1.setRadius(4.0);
    circle_1.getArea();
    circle_1.getCircumference();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    printAreaFun();

    cout << "\n"
         << endl;
}
//* End Function ..
