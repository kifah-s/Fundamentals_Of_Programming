
//* Swaps Values Using References Program (Version 1).

/*
* Write a program that uses references to swap the values of two numbers.

! Output:
! Befor Swap: x = 6, y = 9
! After Swap: x = 9, y = 6
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
    cout << "\n\nYou welcome in Swaps Values Using References Program (Version 1) ..\n"
         << endl;
}

// Print Values - Function.
void printValuesFun(int n1, int n2)
{
    cout << "num 1: " << n1 << ", num 2: " << n2 << endl;
}

// Swap By Reference - Function.
void swapByReferenceFun(int &n1, int &n2)
{
    int temporary = n1;
    n1 = n2;
    n2 = temporary;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num1 = 6, num2 = 9;

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Befor Swap: ";
    printValuesFun(num1, num2);

    swapByReferenceFun(num1, num2);

    cout << "After Swap: ";
    printValuesFun(num1, num2);

    cout << "\n"
         << endl;
}
//* End Function ..
