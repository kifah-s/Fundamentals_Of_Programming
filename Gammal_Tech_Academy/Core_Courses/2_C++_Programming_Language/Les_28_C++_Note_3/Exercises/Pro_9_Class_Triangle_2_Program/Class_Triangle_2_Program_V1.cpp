
//* Class Triangle 2 Program (Version 1).

/*
* Extend the previous program to add a public method classify that determines
* if the triangle is equilateral.

! Input:
! Please, enter Base length: 5.0
! Please, enter Height length: 5.0

! Output:
! Area of the triangle: 12.5
! This triangle is equilateral.
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
        cout << "Area of the triangle: " << area << endl;
    }

    void checkTriangle()
    {
        if (base == height)
        {
            cout << "This triangle is equilateral." << endl;
        }
        else
        {
            cout << "This triangle is not equilateral." << endl;
        }
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Triangle 2 Program (Version 1) ..\n"
         << endl;
}

// Area Of Triangle - Function.
void areaOfTriangleFun()
{
    Triangle t1;
    t1.setDimensions();
    t1.calculateArea();
    t1.checkTriangle();
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
