
//* Decimal To Binary Using Recursion Program (Version 1).

/*
* Write a program to convert a decimal number to binary using recursion.

! Input:
! Please, enter a decimal number: 10

! Output:
! Binary number: 1010
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

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Decimal To Binary Using Recursion Program (Version 1) ..\n"
         << endl;
}

// Get Decimal Number - Function.
int getDecimalNumberFun()
{
    int decNum = 0;
    cout << "Please, enter a decimal number: ";
    cin >> decNum;

    return decNum;
}

// Decimal To Binary - Recursion Function.
void decimalToBinaryRecFun(int decNum)
{
    if (decNum > 0)
    {
        decimalToBinaryRecFun(decNum / 2);
        cout << decNum % 2;
    }
    
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int decimalNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();
    decimalNumber = getDecimalNumberFun();

    cout << "Binary number: ";
    decimalToBinaryRecFun(decimalNumber);

    cout << endl
         << endl;
}
//* End Functions ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
