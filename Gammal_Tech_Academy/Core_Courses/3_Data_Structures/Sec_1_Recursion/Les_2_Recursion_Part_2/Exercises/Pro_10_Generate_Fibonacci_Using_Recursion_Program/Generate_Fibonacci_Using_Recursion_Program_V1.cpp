
//* Generate Fibonacci Using Recursion Program (Version 1).

/*
* Write a program to generate the Fibonacci series up to a given number using recursion.

! Input:
! Please, enter a positive integer: 7

! Output:
! Fibonacci series: 0 1 1 2 3 5 8
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
    cout << "\n\nYou welcome in Generate Fibonacci Using Recursion Program (Version 1) ..\n"
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

// generate Fibonacci Using Recursion - Function.
int generateFibonacciUsingRecursionFun(int num)
{
    if (num <= 1)
    {
        return num;
    }
    else
    {
        return generateFibonacciUsingRecursionFun(num - 1) + generateFibonacciUsingRecursionFun(num - 2);
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

    cout << "Fibonacci series: ";
    for (int i = 0; i < myNumber; i++)
    {
        cout << generateFibonacciUsingRecursionFun(i) << " ";
    }

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
