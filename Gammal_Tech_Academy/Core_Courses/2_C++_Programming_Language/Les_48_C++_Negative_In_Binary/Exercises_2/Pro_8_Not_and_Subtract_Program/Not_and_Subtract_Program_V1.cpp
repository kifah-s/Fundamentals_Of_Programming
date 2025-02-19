
//* Not and Subtract Program (Version 1).

/*
* Write a program that performs the following operations:
* Apply bitwise NOT operation on the decimal number 7.
* Subtract 3 from the result obtained from the first operation.

! Output:
! Result of ~7: -8
! Result of (~7) - 3: -11
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
    cout << "\n\nYou welcome in Not and Subtract Program (Version 1) ..\n"
         << endl;
}

// Bitwise NOT Operation - Function.
int bitwiseNOTOperationFun(int n, int res)
{
    res = ~n;

    return res;
}

// Subtract 3 - Function.
int subtract3Fun(int n, int res)
{
    res = (~n) - 3;

    return res;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 7, result = 0;

    // Call Functions.
    printWelcomeMessageFun();

    result = bitwiseNOTOperationFun(num, result);
    cout << "Result ~" << num << ": " << result << endl;

    result = subtract3Fun(num, result);
    cout << "Result (~" << num << ") - 3: " << result << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
