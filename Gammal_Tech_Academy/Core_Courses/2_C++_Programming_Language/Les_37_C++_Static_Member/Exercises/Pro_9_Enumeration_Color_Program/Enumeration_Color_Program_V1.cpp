
//* Enumeration Color Program (Version 1).

/*
* Create a program that uses an enumeration Color to represent different colors.
* Initialize a static variable selectedColor with the value GREEN and print its value.

! Output:
! Selected Color: 1
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

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Enumeration Color Program (Version 1) ..\n"
         << endl;
}

// Enum.
enum Color
{
    Red,
    Green,
    Blue
};

// Result - Function.
void resultFun()
{
    // Declare Variables.
    static Color selectedColor = Red;

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Selected Color: " << selectedColor << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
