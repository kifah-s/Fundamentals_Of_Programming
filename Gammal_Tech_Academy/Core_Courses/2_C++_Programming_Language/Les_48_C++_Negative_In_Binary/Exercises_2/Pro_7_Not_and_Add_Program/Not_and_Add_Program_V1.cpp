
//* Not and Add Program (Version 1).

/*
* Write a program that performs the following operations:
* Apply bitwise NOT operation on the decimal number 3.
* Add 5 to the result obtained from the first operation.

! Output:
! Result of ~3: -4
! Result of (~3) + 5: 1
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
    cout << "\n\nYou welcome in Not and Add Program (Version 1) ..\n"
         << endl;
}

// Bitwise NOT Operation - Function.
int bitwiseNOTOperationFun(int n, int res)
{
    res = ~n;

    return res;
}

// Add 5 - Function.
int add5Fun(int n, int res)
{
    res = (~n) + 5;

    return res;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 3, result = 0;

    // Call Functions.
    printWelcomeMessageFun();

    result = bitwiseNOTOperationFun(num, result);
    cout << "Result ~" << num << ": " << result << endl;

    result = add5Fun(num, result);
    cout << "Result (~" << num << ") + 5: " << result << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
