
//* Sum Of Two Values Program (Version 1).

/*
* Write a program that utilizes a generic function to calculate the sum of two values.
* Demonstrate the generic sum function with integers, floats, and characters.
* Provide the program code and the output.

! Output:
! Sum Of Integers: 8
! Sum Of Floats: 7
! Concatenate Of Characters: a
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
#include <cmath>

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
    cout << "\n\nYou welcome in Sum Of Two Values Program (Version 1) ..\n"
         << endl;
}

// Create Template.
template <typename T>

// Sum Of Two Values - Function.
T sumOfTwoValuesFun(T val1, T val2)
{
    T sum = val1 + val2;

    return sum;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int intNum1 = 4, intNum2 = 4;
    float floatNum1 = 3.5, floatNum2 = 3.5;
    char char1 = 'A', char2 = 'B';

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Sum Of Integers: " << sumOfTwoValuesFun(intNum1, intNum2) << endl;
    cout << "Sum Of Floats: " << sumOfTwoValuesFun(floatNum1, floatNum2) << endl;
    cout << "Concatenate Of Characters: " << sumOfTwoValuesFun(char1, char2) << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
