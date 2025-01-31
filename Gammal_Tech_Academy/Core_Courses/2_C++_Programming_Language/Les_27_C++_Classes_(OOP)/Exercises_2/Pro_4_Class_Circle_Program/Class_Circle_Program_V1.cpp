
//* Class Circle Program (Version 1).

/*
* Create a program that defines a class Circle with a private member radius,
* Implement a public method setRadius to set the radius and a calculateArea method to calculate and print the area of the circle.

! Output:
! Area: 50.24
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
    float radius, area;

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
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Circle Program (Version 1) ..\n"
         << endl;
}

// Print Area - Function.
void printAreaFun()
{
    Circle circle_1;
    circle_1.setRadius(4.0);
    circle_1.getArea();
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
