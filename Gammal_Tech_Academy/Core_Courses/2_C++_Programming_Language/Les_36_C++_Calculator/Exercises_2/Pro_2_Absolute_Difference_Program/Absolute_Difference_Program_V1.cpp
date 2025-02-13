
//* Absolute Difference Program (Version 1).

/*
* Write a program that takes two numbers as input, calculates their quotient (if the second number is not zero),
* and then computes the absolute difference between the two numbers.
* Include appropriate error handling for division by zero.

! Input:
! Please, enter two numbers:
! num 1: 8
! num 2: 2

! Output:
! Quotient: 4
! Absolute Difference: 6
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
    cout << "\n\nYou welcome in Absolute Difference Program (Version 1) ..\n"
         << endl;
}

// Get First Number - Function.
float getFirstNumberFun()
{
    float n = 0;
    cout << "Please enter tow numbers:" << endl;
    cout << "num 1: ";
    cin >> n;

    return n;
}

// Get Second Number - Function.
float getSecondNumberFun()
{
    float n = 0;
    cout << "num 2: ";
    cin >> n;

    return n;
}

// Calculate Quotient - Function.
void calculateQuotientFun(float n1, float n2)
{
    if (n2 == 0)
    {
        cout << "Quotient: You cannot divide by zero." << endl;
    }
    else
    {
        cout << "Quotient: " << n1 / n2 << endl;
    }
}

// Calculate Difference - Function.
void calculateDifferenceFun(float n1, float n2)
{
    if (n1 > n2)
    {
        cout << "Absolute Difference: " << n1 - n2 << endl;
    }
    else
    {
        cout << "Absolute Difference: " << n2 - n1 << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    float num1 = 0, num2 = 0;

    // Call Functions.
    printWelcomeMessageFun();
    num1 = getFirstNumberFun();
    num2 = getSecondNumberFun();
    calculateQuotientFun(num1, num2);
    calculateDifferenceFun(num1, num2);

    cout << "\n"
         << endl;
}
//* End Function ..
