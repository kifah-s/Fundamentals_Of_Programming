
//* Odd Digits Program (Version 1).

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
    cout << "\n\nYou welcome in Odd Digits Program (Version 1) ..\n"
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

// Odd Digits - Function.
void oddDigitsFun(int num)
{
    int counter = 0, digit = 0;
    while (num != 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
        {
            counter++;
        }
        num = num / 10;
    }

    cout << "Numbers of odd digits: " << counter << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int number = 0;

    // Call Functions.
    printWelcomeMessageFun();
    number = getNumberFun();
    oddDigitsFun(number);

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
