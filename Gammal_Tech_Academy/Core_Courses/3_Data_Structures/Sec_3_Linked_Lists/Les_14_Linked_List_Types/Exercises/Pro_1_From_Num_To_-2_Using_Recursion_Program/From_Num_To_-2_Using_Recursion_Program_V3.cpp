
//* From Num To -2 Using Recursion Program (Version 3).

/*
* Write a program that takes an integer input 'num' from the user,
* and prints the numbers from 'num' to -2 in decreasing order,
* excluding zero. using recursion.

! Input:
! Please, enter a number: 3

! Output:
! Numbers from 3 to -2 (excluding zero): 3 2 1 -1 -2
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
    cout << "\n\nYou welcome in From Num To -2 Using Recursion Program (Version 3) ..\n"
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

// From Number To Negative Two - Recursion Function.
void fromNumberToNegativeTwoRecFun(int num)
{
    if (num >= -2)
    {
        if (num != 0)
        {
            cout << num << " ";
        }

        return fromNumberToNegativeTwoRecFun(num - 1);
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
    cout << "Numbers from " << number << " to -2 (excluding zero): ";
    fromNumberToNegativeTwoRecFun(number);

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
