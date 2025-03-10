
//* Greatest Common Divisor Using Recursion Program (Version 1).

/*
* Write a program to find the Greatest Common Divisor of two numbers using recursion.

! Input:
! Please, enter a first number: 
! Please, enter a second number: 

! Output:
! GCD of 24 and 36 is: 12
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
    cout << "\n\nYou welcome in Greatest Common Divisor Using Recursion Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(string s)
{
    int num = 0;
    cout << "Please, enter a " << s << " number: ";
    cin >> num;

    return num;
}

// Calculate Greatest Common Divisor - Recursion Function.
int calculateGreatestCommonDivisorRecFun()
{
    if () // Base Case.
    {
        
    }
    else
    {
        // Recursive Call.
    }
    
    
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int firstNumber = 0, secondNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();
    firstNumber = getNumberFun("first");
    secondNumber = getNumberFun("second");
    
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
