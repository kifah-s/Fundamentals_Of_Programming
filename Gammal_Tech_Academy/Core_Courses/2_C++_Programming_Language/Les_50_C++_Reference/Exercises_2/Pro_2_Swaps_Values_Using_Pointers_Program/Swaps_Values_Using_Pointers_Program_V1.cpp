
//* Swaps Values Using Pointers Program (Version 1).

/*
* Write a program that swaps the values of two integers using pointers.

! Output:
! Befor Swap: x = 5, y = 10
! After Swap: x = 10, y = 5
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
    cout << "\n\nYou welcome in Swaps Values Using Pointers Program (Version 1) ..\n"
         << endl;
}

// Print Values - Function.
void printValuesFun(int n1, int n2)
{
    cout << "num 1: " << n1 << ", num 2: " << n2 << endl;
}

// Swap By Pointer - Function.
void swapByPointerFun(int *n1, int *n2)
{
    int temporary = *n1;
    *n1 = *n2;
    *n2 = temporary;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num1 = 5, num2 = 10;

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Befor Swap: ";
    printValuesFun(num1, num2);

    swapByPointerFun(&num1, &num2);

    cout << "After Swap: ";
    printValuesFun(num1, num2);

    cout << "\n"
         << endl;
}
//* End Function ..
