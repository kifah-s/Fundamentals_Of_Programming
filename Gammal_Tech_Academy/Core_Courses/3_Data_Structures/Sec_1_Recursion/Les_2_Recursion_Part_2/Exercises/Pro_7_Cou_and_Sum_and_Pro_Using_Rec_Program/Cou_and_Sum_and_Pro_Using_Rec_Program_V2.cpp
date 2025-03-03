
//* Count and Sum and Product Odd Digits Using Recursion Program (Version 2).

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
    cout << "\n\nYou welcome in Count and Sum and Product Odd Digits Using Recursion Program (Version 2) ..\n"
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
int countOddDigitsRecFun(int num, int numOfOddDig)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        return numOfOddDig;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 != 0)
        {
            numOfOddDig++;
        }

        num = num / 10;

        return countOddDigitsRecFun(num, numOfOddDig); // Recursive call.
    }
}

// Sum Odd Digits - Recursion Function.
int sumOddDigitsRecFun(int num, int sumOfOddDig)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        return sumOfOddDig;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 != 0)
        {
            sumOfOddDig = sumOfOddDig + lastDigit;
        }

        num = num / 10;

        return sumOddDigitsRecFun(num, sumOfOddDig); // Recursive call.
    }
}

// Product Odd Digits - Recursion Function.
int productOddDigitsRecFun(int num, int proOfOddDig)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        return proOfOddDig;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 != 0)
        {
            proOfOddDig = proOfOddDig * lastDigit;
        }

        num = num / 10;

        return productOddDigitsRecFun(num, proOfOddDig); // Recursive call.
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0, numberOfOddDigits = 0, sumOfOddDigits = 0, productOfOddDigits = 1;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();

    numberOfOddDigits = countOddDigitsRecFun(myNumber, numberOfOddDigits);
    cout << "Number of Odd digits: " << numberOfOddDigits << endl;

    sumOfOddDigits = sumOddDigitsRecFun(myNumber, sumOfOddDigits);
    cout << "Sum of Odd digits: " << sumOfOddDigits << endl;

    productOfOddDigits = productOddDigitsRecFun(myNumber, productOfOddDigits);
    cout << "Product of Odd digits: " << productOfOddDigits << endl;

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
