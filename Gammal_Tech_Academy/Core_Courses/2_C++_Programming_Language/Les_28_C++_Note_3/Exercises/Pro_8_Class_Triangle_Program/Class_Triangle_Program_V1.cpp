
//* Class Triangle Program (Version 1).

/*
* Create a program with a class Triangle that has private members base and height.
* Implement public methods setDimensions to set the base and height,
* and calculateArea to calculate and display the area of the triangle.

! Input:
! Please, enter Base length: 6.0
! Please, enter Height length: 8.0

! Output:
! Area of the triangle: 24
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
class Triangle
{
private:
    float base = 0, height = 0, area = 0;

public:
    // Setter.
    void setDimensions()
    {
        cout << "Please, enter Base length: ";
        cin >> base;

        cout << "Please, enter Height length: ";
        cin >> height;
    }

    // Getter.
    void calculateArea()
    {
        area = 0.5 * base * height;
        cout << "Area of the triangle: " << area;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Triangle Program (Version 1) ..\n"
         << endl;
}

// Area Of Triangle - Function.
void areaOfTriangleFun()
{
    Triangle t1;
    t1.setDimensions();
    t1.calculateArea();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    areaOfTriangleFun();

    cout << "\n"
         << endl;
}
//* End Function ..
