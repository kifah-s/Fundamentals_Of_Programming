
//* Calculate Power Using Recursion Program (Version 4).

/*
* Write a program to calculate the power of a number using recursion.

! Input:
! Please, enter a number: 2
! Please, enter a power: 5

! Output:
! 2 power 5 is: 32
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
    cout << "\n\nYou welcome in Calculate Power Using Recursion Program (Version 4) ..\n"
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

// Get power - Function.
int getPowerFun()
{
    int pow = 0;
    cout << "Please, enter a power: ";
    cin >> pow;

    return pow;
}

// Calculate Power - Recursion Function.
int calculatePowerRecFun(int num, int pow)
{
    if (pow == 0) // Base Case.
    {
        return 1;
    }
    else
    {
        return num * calculatePowerRecFun(num, pow - 1); // Recursive Call.
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int number = 0, power = 0;

    // Call Functions.
    printWelcomeMessageFun();
    number = getNumberFun();
    power = getPowerFun();

    cout << number << " Power " << power << " is: " << calculatePowerRecFun(number, power) << endl;

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
