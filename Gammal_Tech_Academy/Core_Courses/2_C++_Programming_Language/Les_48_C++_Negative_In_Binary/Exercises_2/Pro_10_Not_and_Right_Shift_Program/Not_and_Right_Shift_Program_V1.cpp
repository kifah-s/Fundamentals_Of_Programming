
//* Not and Right Shift Program (Version 1).

/*
* Write a program that performs the following operations:
* Apply bitwise NOT operation on the decimal number 4.
* Right shift the result obtained from the first operation by 1
* bit.
* Subtract 2 from the shifted result.

! Output:
! Result of ~4: -5
! Result of (~4) >> 1: -3
! Result of ((~4) >> 1) - 2: -5
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
    cout << "\n\nYou welcome in Not and Right Shift Program (Version 1) ..\n"
         << endl;
}

// Bitwise NOT Operation - Function.
int bitwiseNOTOperationFun(int n, int res)
{
    res = ~n;

    return res;
}

// Right Shift - Function.
int rightShiftFun(int n, int res)
{
    res = (~n) >> 1;

    return res;
}

// Subtract 2 - Function.
int subtract2Fun(int n, int res)
{
    res = ((~n) >> 1) - 2;

    return res;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 4, result = 0;

    // Call Functions.
    printWelcomeMessageFun();

    result = bitwiseNOTOperationFun(num, result);
    cout << "Result ~" << num << ": " << result << endl;
    
    result = rightShiftFun(num, result);
    cout << "Result (~" << num << ") >> 1: " << result << endl;

    result = subtract2Fun(num, result);
    cout << "Result ((~" << num << ") >> 1) - 2: " << result << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
