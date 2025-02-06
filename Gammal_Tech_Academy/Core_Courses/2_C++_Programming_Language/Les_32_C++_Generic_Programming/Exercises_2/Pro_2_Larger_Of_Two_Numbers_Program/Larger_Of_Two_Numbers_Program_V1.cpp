
//* Larger Of Two Numbers Program (Version 1).

/*
* Create a program that defines a generic function to print the larger of two numbers.
* The program should demonstrate the usage of the generic function with integer and float values.
* Provide the program code and the output.

! Output:
! The larger value is: 8
! The larger value is: 3.7
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
    cout << "\n\nYou welcome in Larger Of Two Numbers Program (Version 1) ..\n"
         << endl;
}

// Create Template.
template <typename T>

// Larger Value - Function.
T largerValueFun(T val_1, T val_2)
{
    T larVal;

    larVal = (val_1 > val_2) ? val_1 : val_2;

    return larVal;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variable.
    int intLargerValue = 0;
    float floatLargerValue = 0;

    // Call Functions.
    intLargerValue = largerValueFun(8, 2);
    cout << "The larger value is: " << intLargerValue << endl;

    floatLargerValue = largerValueFun(3.7, 2.5);
    cout << "The larger value is: " << floatLargerValue << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
