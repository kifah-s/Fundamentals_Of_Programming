
//* Even Numbers Using Recursion Program (Version 1).

/*
* Create a program that prompts the user to enter an integer 'num',
* and then prints the even numbers from 'num' to 1 in decreasing order.
* using recursion

! Input:
! Please, enter a number: 7

! Output:
! Even numbers from 7 to 1: 6 4 2
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
    cout << "\n\nYou welcome in Even Numbers Using Recursion Program (Version 1) ..\n"
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

// Even Numbers From Num To 1 - Recursion Function.
void evenNumbersFromNumTo1RecFun(int num)
{
    if (num < 1)
    {
        return;
    }
    else
    {
        if (num % 2 == 0)
        {
            cout << num << " ";
            return evenNumbersFromNumTo1RecFun(num - 1);
        }
        else
        {
            return evenNumbersFromNumTo1RecFun(num - 1);
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
    cout << "Even Numbers from " << number << " to 1: ";
    evenNumbersFromNumTo1RecFun(number);

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
