
//* Class Square Program (Version 1).

/*
* Create a class named Square with an attribute sideLength.
* Include a method to calculate the perimeter of the square.

! Output:
! perimeter of the square: 24
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
class Square
{
private:
    int sideLength, perimeter;

public:
    // Setter.
    void setSquareSideLength(int s)
    {
        sideLength = s;
    }

    // Getter.
    int getSquarePerimeter()
    {
        perimeter = sideLength * 4;
        return perimeter;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Square Program (Version 1) ..\n"
         << endl;
}

// Square - Function.
void squareFun()
{
    Square s1;
    s1.setSquareSideLength(6);

    cout << "perimeter of square: " << s1.getSquarePerimeter() << endl;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    squareFun();

    cout << "\n"
         << endl;
}
//* End Function ..
