
//* Generic Function To Calculate Square Program (Version 1).

/*
* Write a program that defines a generic function to calculate the square of a given number.
* Allow the user to input a float and print its square using the generic function.
* Provide the program code and the output.

! Input:
! Please, enter a float number: 4.4

! Output:
! Square: 19.36
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
    cout << "\n\nYou welcome in Generic Function To Calculate Square Program (Version 1) ..\n"
         << endl;
}

// Create Template.
template <typename T>

// Calculate Square - Function.
T calculateSquareFun(T firVal)
{
    return firVal * firVal;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variable.
    float number;

    cout << "Please, enter a float number: ";
    cin >> number;

    cout << "Square: " << calculateSquareFun(number);

    cout << "\n"
         << endl;
}
//* End Function ..
