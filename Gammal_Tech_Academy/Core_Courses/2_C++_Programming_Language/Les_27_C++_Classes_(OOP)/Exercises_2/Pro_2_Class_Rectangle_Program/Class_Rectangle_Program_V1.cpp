
//* Class Rectangle Program (Version 1).

/*
* Create a program with a class Rectangle that has private members length and width,
* Implement public methods setDimensions to set length and width,
* and calculateArea to calculate and print the area.

! Output:
! Area: 15
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
    int length, width, area;

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

        cout << "Area: " << area;
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

// Print Area - Function.
void printAreaFun()
{
    Rectangle rectangle_1;
    rectangle_1.setLength(5);
    rectangle_1.setWidth(3);
    rectangle_1.getArea();
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
