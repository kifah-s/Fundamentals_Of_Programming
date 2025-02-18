
//* Bitwise NOT Operation Program (Version 1).

/*
* Write a program that performs the following operations:
* Apply bitwise NOT operation on the decimal number 5.
* Add 10 to the result obtained from the first operation.

! Output:
! Result of ~5: -6
! Result of (~5) + 10: 4
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
    cout << "\n\nYou welcome in Bitwise NOT Operation Program (Version 1) ..\n"
         << endl;
}

// Bitwise NOT Operation - Function.
int bitwiseNOTOperationFun(int n, int res)
{
    res = ~n;

    return res;
}

// Add 10 - Function.
int add10Fun(int res)
{
    res = res + 10;

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
    
    result = add10Fun(result);
    cout << "Result (~" << num << ") + 10: " << result << endl;


    cout << "\n"
         << endl;
}
//* End Function ..
