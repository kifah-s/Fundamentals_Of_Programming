
//* Class Shape Program (Version 1).

/*
* Create a base class Shape with a method draw to display "Drawing a shape".
* Derive a class Circle from Shape with a method drawCircle to display "Drawing a circle".

! Output:
! Drawing a shape.
! Drawing a circle.
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
public:
    void draw()
    {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape
{
public:
    void drawCircle()
    {
        cout << "Drawing a circle." << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Shape Program (Version 1) ..\n"
         << endl;
}

// Shape - Function.
void shapeFun()
{
    Circle myCircle;
    myCircle.draw();
    myCircle.drawCircle();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    shapeFun();

    cout << "\n"
         << endl;
}
//* End Function ..
