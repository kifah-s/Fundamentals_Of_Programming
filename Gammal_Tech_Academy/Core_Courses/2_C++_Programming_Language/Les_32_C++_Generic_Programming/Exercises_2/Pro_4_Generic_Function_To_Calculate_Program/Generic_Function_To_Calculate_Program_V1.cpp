
//* Generic Function To Calculate Program (Version 1).

/*
* Write a program that utilizes a generic function to calculate the sum of two values.
* Demonstrate the generic sum function with integers, floats, and characters.
* Provide the program code and the output.

! Output:
! Sum of integers: 8
! Sum of floats: 7
! Concatenation of characters:
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
    cout << "\n\nYou welcome in Generic Function To Calculate Program (Version 1) ..\n"
         << endl;
}

// Create Template.
template <typename T>

// Generic To Calculate - Function.
T genericToCalculateFun(T val_1, T val_2)
{
    T sum;
    
    sum = val_1 + val_2;

    return sum;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variable.
    int intNum1 = 4, intNum2 = 4, intSumNumbers = 0;
    float floatNum1 = 3.5, floatNum2 = 3.5, floatSumNumbers = 0;
    char char1 = 'A', char2 = 'B', charConCatenateChars;

    // Call Functions.
    intSumNumbers = genericToCalculateFun(intNum1, intNum2);
    cout << "Sum of integers: " << intSumNumbers << endl;
    
    floatSumNumbers = genericToCalculateFun(floatNum1, floatNum2);
    cout << "Sum of floats: " << floatSumNumbers << endl;
    
    charConCatenateChars = genericToCalculateFun(char1, char2);
    cout << "Sum of Concatenting: " << charConCatenateChars << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
