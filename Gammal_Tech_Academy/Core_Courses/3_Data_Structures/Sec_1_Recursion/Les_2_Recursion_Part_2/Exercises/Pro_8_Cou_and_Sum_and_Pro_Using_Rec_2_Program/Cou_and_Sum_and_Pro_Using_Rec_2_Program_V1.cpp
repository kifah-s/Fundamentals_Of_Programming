
//* Count and Sum and Product Even Digits Using Recursion 2 Program (Version 1).

/*
* Write a program that takes a positive integer 'num' as input from the user.
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
    cout << "\n\nYou welcome in Count and Sum and Product Even Digits Using Recursion 2 Program (Version 1) ..\n"
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
void countEvenDigitsRecFun(int num, int numOfEvenDig)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        cout << "Number of Even digits: " << numOfEvenDig << endl;
        return;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 == 0)
        {
            numOfEvenDig++;
        }

        num = num / 10;

        countEvenDigitsRecFun(num, numOfEvenDig); // Recursive call.
    }
}

// Sum Even Digits - Recursion Function.
void sumEvenDigitsRecFun(int num, int sumOfEvenDig)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        cout << "Sum of Even digits: " << sumOfEvenDig << endl;
        return;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 == 0)
        {
            sumOfEvenDig = sumOfEvenDig + lastDigit;
        }

        num = num / 10;

        sumEvenDigitsRecFun(num, sumOfEvenDig); // Recursive call.
    }
}

// Product Even Digits - Recursion Function.
void productEvenDigitsRecFun(int num, int proOfEvenDig)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        cout << "Product of Even digits: " << proOfEvenDig << endl;
        return;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 == 0)
        {
            proOfEvenDig = proOfEvenDig * lastDigit;
        }

        num = num / 10;

        productEvenDigitsRecFun(num, proOfEvenDig); // Recursive call.
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0, numberOfEvenDigits = 0, sumOfEvenDigits = 0, productOfEvenDigits = 1;

    // Call Functions.
    printWelcomeMessageFun();
    myNumber = getNumberFun();
    countEvenDigitsRecFun(myNumber, numberOfEvenDigits);
    sumEvenDigitsRecFun(myNumber, sumOfEvenDigits);
    productEvenDigitsRecFun(myNumber, productOfEvenDigits);

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
