
//* Count and Sum Odd Digits Using Recursion Program (Version 1).

/*
* Write a program that prompts the user to enter a positive integer 'num'.
* The program should count and display the number of odd digits in 'num' using a recursive function named countOddDigits.
* Additionally, the program should calculate and display the sum of odd digits in 'num' using a recursive function named sumOddDigits.

! Input:
! Please, enter a positive integer: 12345

! Output:
! Number of odd digits: 3
! Sum of odd digits: 9
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
    cout << "\n\nYou welcome in Count and Sum Odd Digits Using Recursion Program (Version 1) ..\n"
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
void countOddDigitsRecFun(int num, int numOfOddDig)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        cout << "Number of Odd digits: " << numOfOddDig << endl;
        return;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 != 0)
        {
            numOfOddDig++;
        }

        num = num / 10;

        countOddDigitsRecFun(num, numOfOddDig); // Recursive call.
    }
}

// Sum Odd Digits - Recursion Function.
void sumOddDigitsRecFun(int num, int sumOfOddDig)
{
    int lastDigit = 0;

    if (num == 0) // Base Case.
    {
        cout << "Sum of Odd digits: " << sumOfOddDig << endl;
        return;
    }
    else
    {
        lastDigit = num % 10;

        if (lastDigit % 2 != 0)
        {
            sumOfOddDig = sumOfOddDig + lastDigit;
        }

        num = num / 10;

        sumOddDigitsRecFun(num, sumOfOddDig); // Recursive call.
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0, numberOfOddDigits = 0, sumOfOddDigits = 0;

    // Call Functions.
    printWelcomeMessageFun();
    myNumber = getNumberFun();
    countOddDigitsRecFun(myNumber, numberOfOddDigits);
    sumOddDigitsRecFun(myNumber, sumOfOddDigits);

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
