
//* From N To 1 Using Recursion Program (Version 2).

/*
* Create a program that prompts the user to enter an integer 'num',
* and then prints the even numbers from 'num' to 1 in decreasing order. using recursion

! Input:
! Please, enter a number: 7

! Output:
! Numbers from 7 to 1 (excluding zero): 6 4 2
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
    cout << "\n\nYou welcome in From N To 1 Using Recursion Program (Version 2) ..\n"
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

// Check Numbers - Function.
bool checkNumbersFun(int n)
{
    if (n % 2 == 0)
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
    if (n >= 1)
    {
        if (checkNumbersFun(n))
        {
            cout << n << " ";
            recursionFun(n - 1);
        }
        else
        {
            recursionFun(n - 1);
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
    cout << "Even Numbers from " << myNumber << " To 1: ";
    recursionFun(myNumber);

    cout << "\n"
         << endl;
}
//* End Function ..
