
//* Class Named Square Program (Version 1).

/*
* Create a class named Square with an attribute sideLength.
* Include a method to calculate the perimeter of the square.

! Output:
! perimeter of the square is: 24
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
    float sideLength;

public:
    // Setter.
    void setSideLength(int sl)
    {
        sideLength = sl;
    }

    // Getter.
    void printPerimeter()
    {
        float perimeter = sideLength * 4;
        cout << "perimeter of the square is: " << perimeter << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Named Square Program (Version 1) ..\n"
         << endl;
}

// Square - Function.
void squareFun()
{
    Square s1;
    s1.setSideLength(6);
    s1.printPerimeter();
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
