
//* Class Rectangle 2 Program (Version 1).

/*
* Expand the previous program to add a public method calculatePerimeter to calculate and print the perimeter.

! Output:
! Area: 15
! Perimeter: 16
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
class Rectangle
{
private:
    int length, width, area, perimeter;

public:
    void setLength(int len)
    {
        length = len;
    }

    void setWidth(int wid)
    {
        width = wid;
    }

    void getArea()
    {
        area = length * width;

        cout << "Area: " << area << endl;
    }

    void getPerimeter()
    {
        perimeter = (length + width) * 2;

        cout << "Perimeter: " << perimeter;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Rectangle 2 Program (Version 1) ..\n"
         << endl;
}

// Print Area And Perimeter - Function.
void printAreaAndPerimeterFun()
{
    Rectangle rectangle_1;
    rectangle_1.setLength(5);
    rectangle_1.setWidth(3);
    rectangle_1.getArea();
    rectangle_1.getPerimeter();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    printAreaAndPerimeterFun();

    cout << "\n"
         << endl;
}
//* End Function ..
