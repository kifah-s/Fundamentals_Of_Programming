
//* Count and Sum and Product Even Digits Using Recursion 2 Program (Version 3).

/*
* * Write a program that takes a positive integer 'num' as input from the user.
* The program should count and display the number of even digits, calculate and display the sum of even digits,
* and calculate and display the product of even digits in 'num'.

! Input:
! Please, enter a positive integer: 12345

! Output:
! Number of Even digits: 2
! Sum of Even digits: 6
! Product of Even digits: 8
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
    cout << "\n\nYou welcome in Count and Sum and Product Even Digits Using Recursion 2 Program (Version 3) ..\n"
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

// Count Even Digits - Recursion Function.
int countEvenDigitsRecFun(int num)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        return 0;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 == 0)
        {
            return 1 + countEvenDigitsRecFun(num / 10); // Recursive call.
        }

        return countEvenDigitsRecFun(num / 10); // Recursive call.
    }
}

// Sum Even Digits - Recursion Function.
int sumEvenDigitsRecFun(int num)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        return 0;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 == 0)
        {
            return lastDigit + sumEvenDigitsRecFun(num / 10); // Recursive call.
        }

        return sumEvenDigitsRecFun(num / 10); // Recursive call.
    }
}

// Product Even Digits - Recursion Function.
int productEvenDigitsRecFun(int num)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        return 1;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 == 0)
        {
            return lastDigit * productEvenDigitsRecFun(num / 10); // Recursive call.
        }

        return productEvenDigitsRecFun(num / 10); // Recursive call.
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

    cout << "Number of Even digits: " << countEvenDigitsRecFun(myNumber) << endl;

    cout << "Sum of Even digits: " << sumEvenDigitsRecFun(myNumber) << endl;

    cout << "Product of Even digits: " << productEvenDigitsRecFun(myNumber) << endl;

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
