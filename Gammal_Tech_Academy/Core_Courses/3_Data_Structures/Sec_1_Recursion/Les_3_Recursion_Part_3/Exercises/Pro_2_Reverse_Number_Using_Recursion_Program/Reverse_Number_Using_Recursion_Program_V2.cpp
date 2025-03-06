
//* Reverse Number Using Recursion Program (Version 2).

/*
* Extend the previous program to find and display the reverse of the entered positive integer 'num' if it is odd.
* If 'num' is even, the program should continue to display the message "No result." using recursion

! Input:
! Please, enter a positive integer: 12345

! Output:
! Number of digits: 5
! Sum of digits: 15
! Product of digits: 120
! Revers of digits: 54321
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
    cout << "\n\nYou welcome in Reverse Number Using Recursion Program (Version 2) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int num = 0;
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Number Of Digits - Recursion Function.
int numberOfDigitsRecFun(int num)
{
    if (num == 0) // Base Case.
    {
        return 0;
    }
    else
    {
        return 1 + numberOfDigitsRecFun(num / 10); // Recursive Call.
    }
}

// Sum Of Digits - Recursion Function.
int sumOfDigitsRecFun(int num)
{
    if (num == 0) // Base Case.
    {
        return 0;
    }
    else
    {
        return num % 10 + sumOfDigitsRecFun(num / 10); // Recursive Call.
    }
}

// Product Of Digits - Recursion Function.
int productOfDigitsRecFun(int num)
{
    if (num == 0) // Base Case.
    {
        return 1;
    }
    else
    {
        return num % 10 * productOfDigitsRecFun(num / 10); // Recursive Call.
    }
}

// Revers Number - Recursion Function.
int reversNumberRecFun(int num, int revNum)
{
    if (num == 0) // Base Case.
    {
        return revNum;
    }
    else
    {
        return reversNumberRecFun(num / 10, (revNum * 10) + (num % 10)); // Recursive Call.
    }
}

// Check Number - Function.
bool checkNumberFun(int num)
{
    if (num % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();

    if (checkNumberFun(myNumber) == true)
    {

        cout << "Number of digits: " << numberOfDigitsRecFun(myNumber) << endl;

        cout << "Sum of digits: " << sumOfDigitsRecFun(myNumber) << endl;

        cout << "Product of digits: " << productOfDigitsRecFun(myNumber) << endl;

        cout << "Revers of digits: " << reversNumberRecFun(myNumber, 0) << endl;
    }
    else
    {
        cout << "No Result" << endl;
    }

    cout << endl
         << endl;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
