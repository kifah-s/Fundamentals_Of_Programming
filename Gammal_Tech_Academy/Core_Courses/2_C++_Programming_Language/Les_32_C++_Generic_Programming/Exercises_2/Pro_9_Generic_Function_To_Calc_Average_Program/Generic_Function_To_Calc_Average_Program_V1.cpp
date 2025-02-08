
//* Generic Function To Calculate Average Program (Version 1).

/*
* Create a program with a generic function to calculate the average of two numbers.
* Allow the user to input two floats and print the average.
* Provide the program code and the output.

! Input:
! Please enter two floats:
! first number: 4
! second number: 2

! Output:
! Average: 3
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
    cout << "\n\nYou welcome in Generic Function To Calculate Average Program (Version 1) ..\n"
         << endl;
}

// Create Template.
template <typename T>

// Calculate Average - Function.
T calculateAverageFun(T firVal, T secVal)
{
    return (firVal + secVal) / 2;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variable.
    float firNumber, secNumber;

    cout << "Please, enter tow floats: " << endl;
    cout << "first number: ";
    cin >> firNumber;

    cout << "second number: ";
    cin >> secNumber;

    cout << "Average: " << calculateAverageFun(firNumber, secNumber);

    cout << "\n"
         << endl;
}
//* End Function ..
