
//* Bitwise NOT Operation 2 Program (Version 1).

/*
* Write a program that performs the following operations:
* Apply bitwise NOT operation on the decimal number 5.
* Add 10 to the result obtained from the first operation.
* Left shift the result from the first operation by 2 bits.
* Update the variable y based on the new value of x.
* Display the results after each operation.

! Output:
! Result of ~5: -6
! Result of (~5) + 10: 4
! Result of (~5) << 2: -24
! Result of (~5) << 2 + 5: -19
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
    cout << "\n\nYou welcome in Bitwise NOT Operation 2 Program (Version 1) ..\n"
         << endl;
}

// Bitwise NOT Operation - Function.
int bitwiseNOTOperationFun(int n, int res)
{
    res = ~n;

    return res;
}

// Add 10 - Function.
int add10Fun(int n, int res)
{
    res = ~n + 10;

    return res;
}

// Left Shift - Function.
int leftShiftFun(int n, int res)
{
    res = ~n << 2;

    return res;
}

// Left Shift And 5 - Function.
int leftShiftAnd5Fun(int n, int res)
{
    res = (~n << 2) + 5;

    return res;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 5, result = 0;

    // Call Functions.
    printWelcomeMessageFun();

    result = bitwiseNOTOperationFun(num, result);
    cout << "Result ~" << num << ": " << result << endl;

    result = add10Fun(num, result);
    cout << "Result (~" << num << ") + 10: " << result << endl;

    result = leftShiftFun(num, result);
    cout << "Result (~" << num << ") << 2: " << result << endl;
    
    result = leftShiftAnd5Fun(num, result);
    cout << "Result (~" << num << " << 2) + 5: " << result << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
