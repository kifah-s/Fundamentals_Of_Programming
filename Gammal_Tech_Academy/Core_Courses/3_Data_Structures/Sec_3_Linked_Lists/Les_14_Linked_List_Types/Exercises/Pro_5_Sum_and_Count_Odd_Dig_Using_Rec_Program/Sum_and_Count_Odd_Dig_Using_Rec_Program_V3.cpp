
//* Sum and Count Odd Digits Using Recursion Program (Version 3).

/*
* Write a program that prompts the user to enter a positive integer 'num',
* The program should count and display the number of odd digits in 'num' using a recursive function named countOddDigits,
* Additionally, the program should calculate and display the sum of odd digits in 'num' using a recursive function named sumOddDigits.

! Input:
! Please, enter a positive number: 12345

! Output:
! Numbers of odd digits: 3
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
    cout << "\n\nYou welcome in Sum and Count Odd Digits Using Recursion Program (Version 3) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int num = 0;
    cout << "Please, enter a positive number: ";
    cin >> num;

    return num;
}

// Count Odd Digits - Recursion Function.
int countOddDigitsRecFun(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        int lastDigit = num % 10;
        if (lastDigit % 2 != 0)
        {
            return 1 + countOddDigitsRecFun(num / 10);
        }
        else
        {
            return countOddDigitsRecFun(num / 10);
        }
    }
}

// Sum Odd Digits - Recursion Function.
int sumOddDigitsRecFun(int num, int sumDig = 0)
{
    if (num == 0)
    {
        return sumDig;
    }
    else
    {
        int lastDigit = num % 10;
        if (lastDigit % 2 != 0)
        {
            sumDig += lastDigit;
        }
        return sumOddDigitsRecFun(num / 10, sumDig);
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int number = 0;

    // Call Functions.
    printWelcomeMessageFun();
    number = getNumberFun();
    cout << "Numbers of odd digits: " << countOddDigitsRecFun(number) << endl;
    cout << "Sum of odd digits: " << sumOddDigitsRecFun(number) << endl;

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
