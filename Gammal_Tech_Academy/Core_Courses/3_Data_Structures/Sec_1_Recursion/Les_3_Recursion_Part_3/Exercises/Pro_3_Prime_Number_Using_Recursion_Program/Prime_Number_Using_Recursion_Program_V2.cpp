
//* Prime Number Using Recursion Program (Version 2).

/*
* Write a program that takes a positive integer 'num' as input from the user.
* The program should determine and display whether 'num' is a prime number or not using recursion.

! Input:
! Please, enter a positive integer: 5

! Output:
! 5 is a prime number.
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
#include <cmath>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Prime Number Using Recursion Program (Version 2) ..\n"
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

// Check Number - Recursion Function.
bool checkNumberRecFun(int num, int i = 2)
{
    // Base Case.
    if (num <= 1)
    {
        return false;
    }
    if (i > sqrt(num))
    {
        return true;
    }
    
    // Check for divisibility
    if (num % i == 0)
    {
        return false;
    }
    
    // Recursive Call.
    return checkNumberRecFun(num, i + 1);
}

// Prime Or Not - Function.
void primeOrNotFun(int num)
{
    if (checkNumberRecFun(num))
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
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
    primeOrNotFun(myNumber);

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
