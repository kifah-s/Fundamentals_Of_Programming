
//* Calculate Factorial Using Recursion Program (Version 3).

/*
* Write a program to calculate the factorial of a given number using recursion.

! Input:
! Please, enter a positive integer: 5

! Output:
! Factorial of 5 is: 120
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
    cout << "\n\nYou welcome in Calculate Factorial Using Recursion Program (Version 3) ..\n"
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

// Calculate Factorial Using Recursion - Function.
int calculateFactorialUsingRecursionFun(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * calculateFactorialUsingRecursionFun(num - 1);
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();
    myNumber = getNumberFun();

    cout << "Factorial of " << myNumber << " is: " << calculateFactorialUsingRecursionFun(myNumber) << endl;

    cout << endl
         << endl;
}
//* End Functions ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
