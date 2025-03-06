
//* Odd or Even Using Recursion Program (Version 2).

/*
* Write a program to further calculate and display the product of digits if the entered positive integer 'num' is odd.
* If 'num' is even, the program should continue to display the message "No result."

! Input:
! Please, enter a positive integer: 1573

! Output:
! Number of digits: 4
! Sum of digits: 16
! Product of digits: 105
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
    cout << "\n\nYou welcome in Odd or Even Using Recursion Program (Version 2) ..\n"
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

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();

    if (myNumber % 2)
    {

        cout << "Number of digits: " << numberOfDigitsRecFun(myNumber) << endl;

        cout << "Sum of digits: " << sumOfDigitsRecFun(myNumber) << endl;

        cout << "Product of digits: " << productOfDigitsRecFun(myNumber) << endl;
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
