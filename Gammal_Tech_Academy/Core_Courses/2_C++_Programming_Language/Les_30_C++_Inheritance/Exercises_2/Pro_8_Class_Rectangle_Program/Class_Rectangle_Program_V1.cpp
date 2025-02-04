
//* Class Rectangle Program (Version 1).

/*
* Create a program using inheritance.
* Define a base class Shape with attributes width and height,
* and a method displayDimensions to display the shape's dimensions.
* Derive a class Rectangle from Shape with an additional attribute area,
* and a method calculateArea to calculate and display the area of the rectangle.
* Get details from the user for both the shape and the rectangle.

! Input:
! Please, enter the shape details:
! Please, enter width: 5
! Please, enter height: 8

! Output:
! width: 5, height: 8
! area: 40
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
class Shape
{
protected:
    float width, height;

public:
    // Setter.
    void setWidth()
    {
        cout << "Please, enter the shape details:" << endl;
        cout << "Please, enter width: ";
        cin >> width;
    }

    void setHeight()
    {
        cout << "Please, enter height: ";
        cin >> height;
    }

    // Getter.
    void displayDimensions()
    {
        cout << "\nwidth: " << width << ", height: " << height << endl;
    }
};

class Rectangle : public Shape
{
private:
    float area;

public:
    // Getter.
    void calculateArea()
    {
        area = width * height;
        cout << "area: " << area << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Rectangle Program (Version 1) ..\n"
         << endl;
}

// Rectangle - Function.
void rectangleFun()
{
    Rectangle myRectangle;

    myRectangle.setWidth();
    myRectangle.setHeight();
    myRectangle.displayDimensions();
    myRectangle.calculateArea();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    rectangleFun();

    cout << "\n"
         << endl;
}
//* End Function ..
