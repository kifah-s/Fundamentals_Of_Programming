
//* Factorial Program (Version 1).

/*
* Write a program that calculates the factorial of a given positive integer.

! Input:
! Please, Enter a positive number: 5

! Output:
! Factorial: 120
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

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Factorial Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int n;
    cout << "Please, Enter a positive number: ";
    cin >> n;

    return n;
}

// Calculate Factorial - Function.
int calculateFactorialFun(int n)
{
    int fac = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     fac = fac * i;
    // }

    for (int i = n; i > 0; i--)
    {
        fac = fac * i;
    }

    return fac;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 0, factorial = 1;

    // Call Functions.
    printWelcomeMessageFun();
    num = getNumberFun();

    if (num > 0)
    {
        factorial = calculateFactorialFun(num);
        cout << "Factorial: " << factorial;
    }
    else
    {
        cout << "Invalid Input, Please enter positive number.";
    }

    cout << "\n"
         << endl;
}
//* End Function ..
