
//* Odd Numbers Using Recursion Program (Version 3).

/*
* Write a program that prompts the user to enter an integer 'num' and then,
* prints the odd numbers from 1 to 'num' in ascending order.

! Input:
! Please, enter a number: 8

! Output:
! Even Numbers from 1 to 8: 1 3 5 7
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
    cout << "\n\nYou welcome in Odd Numbers Using Recursion Program (Version 3) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int n = 0;

    cout << "Please, enter a number: ";
    cin >> n;

    return n;
}

// Check Number - Function.
bool checkNumberFun(int n)
{
    if (n % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Recursion - Function.
void recursionFun(int n)
{
    if (n > 0) // Base Case.
    {
        recursionFun(n - 1); // Recursive call.
        
        if (checkNumberFun(n) == true)
        {
            cout << n << " ";
        }
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
    cout << "Odd Numbers from 1 To " << myNumber << ": ";
    recursionFun(myNumber);

    cout << "\n"
         << endl;
}
//* End Function ..
