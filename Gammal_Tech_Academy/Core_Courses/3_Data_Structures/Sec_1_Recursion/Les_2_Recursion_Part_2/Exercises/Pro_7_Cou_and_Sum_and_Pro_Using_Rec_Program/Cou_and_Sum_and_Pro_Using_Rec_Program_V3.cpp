
//* Count and Sum and Product Odd Digits Using Recursion Program (Version 3).

/*
* Write a program that prompts the user to enter a positive integer 'num'.
* The program should count and display the number of odd digits in 'num' using a recursive function named countOddDigits.
* Additionally, the program should calculate and display the sum of odd digits in 'num' using a recursive function named sumOddDigits,
* and find the product of odd digits using a recursive function named productOddDigits.

! Input:
! Please, enter a positive integer: 12345

! Output:
! Number of odd digits: 3
! Sum of odd digits: 9
! Product of odd digits: 15
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
    cout << "\n\nYou welcome in Count and Sum and Product Odd Digits Using Recursion Program (Version 3) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int num = 0;

    cout << "Please, enter a positive integer: ";
    cin >> num;

    return num;
}

// Count Odd Digits - Recursion Function.
int countOddDigitsRecFun(int num)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        return 0;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 != 0)
        {
            return 1 + countOddDigitsRecFun(num / 10); // Recursive call.
        }

        return countOddDigitsRecFun(num / 10); // Recursive call.
    }
}

// Sum Odd Digits - Recursion Function.
int sumOddDigitsRecFun(int num)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        return 0;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 != 0)
        {
            return lastDigit + sumOddDigitsRecFun(num / 10); // Recursive call.
        }

        return sumOddDigitsRecFun(num / 10); // Recursive call.
    }
}

// Product Odd Digits - Recursion Function.
int productOddDigitsRecFun(int num)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        return 1;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 != 0)
        {
            return lastDigit * productOddDigitsRecFun(num / 10); // Recursive call.
        }

        return productOddDigitsRecFun(num / 10); // Recursive call.
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

    cout << "Number of Odd digits: " << countOddDigitsRecFun(myNumber) << endl;

    cout << "Sum of Odd digits: " << sumOddDigitsRecFun(myNumber) << endl;

    cout << "Product of Odd digits: " << productOddDigitsRecFun(myNumber) << endl;

    cout << "\n"
         << endl;
}
//* End Functions ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
