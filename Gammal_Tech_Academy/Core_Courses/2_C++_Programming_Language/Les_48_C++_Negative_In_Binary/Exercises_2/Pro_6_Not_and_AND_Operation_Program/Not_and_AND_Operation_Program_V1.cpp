
//* Not & AND Operation Program (Version 1).

/*
* Write a program that performs the following operations:
* Apply bitwise NOT operation on the decimal number 8.
* Add 15 to the result obtained from the first operation.
* Left shift the new result by 3 bits.
* Subtract 10 from the shifted result.
* Perform a bitwise AND operation with 7 on the final result.

! Output:
! Result of ~8: -9
! Result of (~8) + 15: 6
! Result of ((~8) + 15) << 3: 48
! Result of (((~8) + 15) << 3) - 10: 38
! Result of ((((~8) + 15) << 3) - 10) & 7: 6
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
    cout << "\n\nYou welcome in Not & AND Operation Program (Version 1) ..\n"
         << endl;
}

// Bitwise NOT Operation - Function.
int bitwiseNOTOperationFun(int n, int res)
{
    res = ~n;

    return res;
}

// Add 15 - Function.
int add15Fun(int n, int res)
{
    res = (~n) + 15;

    return res;
}

// Left Shift 3 - Function.
int leftShift3Fun(int n, int res)
{
    res = ((~n) + 15) << 3;

    return res;
}

// Subtract 10 - Function.
int subtract10Fun(int n, int res)
{
    res = (((~n) + 15) << 3) - 10;

    return res;
}

// Bitwise AND Operation - Function.
int bitwiseANDOperationFun(int n, int res)
{
    res = ((((~n) + 15) << 3) - 10) & 7;

    return res;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 8, result = 0;

    // Call Functions.
    printWelcomeMessageFun();

    result = bitwiseNOTOperationFun(num, result);
    cout << "Result ~" << num << ": " << result << endl;

    result = add15Fun(num, result);
    cout << "Result (~" << num << ") + 15: " << result << endl;

    result = leftShift3Fun(num, result);
    cout << "Result ((~" << num << ") + 15) << 3: " << result << endl;
    
    result = subtract10Fun(num, result);
    cout << "Result (((~" << num << ") + 15) << 3) - 10: " << result << endl;
    
    result = bitwiseANDOperationFun(num, result);
    cout << "Result ((((~" << num << ") + 15) << 3) - 10) & 7: " << result << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
