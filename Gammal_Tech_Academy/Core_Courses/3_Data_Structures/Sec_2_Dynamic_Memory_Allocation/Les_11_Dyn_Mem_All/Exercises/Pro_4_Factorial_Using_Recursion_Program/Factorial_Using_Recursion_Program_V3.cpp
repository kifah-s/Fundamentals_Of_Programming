
//* Factorial Using Recursion Program (Version 3).

/*
* Write a program to calculate the factorial of a given number using recursion.

! Output:
! Please, enter a number: 5

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
#include <stdlib.h>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Factorial Using Recursion Program (Version 3) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int myNum = 0;

    cout << "Please, enter a number: ";
    cin >> myNum;

    return myNum;
}

// Calculate Factorial - Function.
int calculateFactorialFun(int myNum)
{
    if (myNum == 0 || myNum == 1)
    {
        return 1;
    }
    else
    {
        return myNum * calculateFactorialFun(myNum - 1);
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

    cout << "Factorial of " << myNumber << " is: " << calculateFactorialFun(myNumber) << endl;

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
