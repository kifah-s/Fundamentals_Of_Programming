
//* Not and Left Shift Program (Version 1).

/*
* Write a simple program that performs the following operations:
* Apply bitwise NOT operation on the decimal number 10.
* Left shift the result obtained from the first operation by 2
* bits.
* Add 8 to the shifted result.

! Output:
! Result of ~10: -11
! Result of (~10) << 2: -44
! Result of ((~10) << 2) + 8: -36
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
    cout << "\n\nYou welcome in Not and Left Shift Program (Version 1) ..\n"
         << endl;
}

// Bitwise NOT Operation - Function.
int bitwiseNOTOperationFun(int n, int res)
{
    res = ~n;

    return res;
}

// Left Shift - Function.
int leftShiftFun(int n, int res)
{
    res = (~n) << 2;

    return res;
}

// Add 8 - Function.
int add8Fun(int n, int res)
{
    res = ((~n) << 2) + 8;

    return res;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 10, result = 0;

    // Call Functions.
    printWelcomeMessageFun();

    result = bitwiseNOTOperationFun(num, result);
    cout << "Result ~" << num << ": " << result << endl;
    
    result = leftShiftFun(num, result);
    cout << "Result (~" << num << ") << 2: " << result << endl;

    result = add8Fun(num, result);
    cout << "Result ((~" << num << ") << 2) + 8: " << result << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
