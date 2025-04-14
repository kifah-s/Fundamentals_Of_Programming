
//* Odd Digits Using Recursion Program (Version 6).

/*
* Write a program that prompts the user to enter a positive integer 'num',
* The program should count and display the number of odd digits in 'num'.

! Input:
! Please, enter a positive number: 25635

! Output:
! Numbers of odd digits: 3
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
    cout << "\n\nYou welcome in Odd Digits Using Recursion Program (Version 6) ..\n"
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

// Odd Digits - Recursion Function.
int oddDigitsRecFun(int num)
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
            return 1 + oddDigitsRecFun(num / 10);
        }
        else
        {
            return oddDigitsRecFun(num / 10);
        }
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
    cout << "Numbers of odd digits: " << oddDigitsRecFun(number) << endl;

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
