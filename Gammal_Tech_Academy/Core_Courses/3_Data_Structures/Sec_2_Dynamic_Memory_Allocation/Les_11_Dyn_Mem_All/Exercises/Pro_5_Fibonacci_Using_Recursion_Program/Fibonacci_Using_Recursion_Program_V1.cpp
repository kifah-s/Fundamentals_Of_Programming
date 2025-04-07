
//* Fibonacci Using Recursion Program (Version 1).

/*
* Write a program to generate the Fibonacci series up to a given number using recursion.

! Output:
! Please, enter a number: 7

! Output:
! Fibonacci: 0 1 1 2 3 5 8
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
    cout << "\n\nYou welcome in Fibonacci Using Recursion Program (Version 1) ..\n"
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

// Calculate Fibonacci - Function.
int calculateFibonacciFun(int myNum)
{
    if (myNum <= 1)
    {
        return myNum;
    }
    else
    {
        return calculateFibonacciFun(myNum - 1) + calculateFibonacciFun(myNum - 2);
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
    
    cout << "Fibonacci: ";
    for (int i = 0; i < myNumber; i++)
    {
        cout << calculateFibonacciFun(i) << " ";
    }

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
