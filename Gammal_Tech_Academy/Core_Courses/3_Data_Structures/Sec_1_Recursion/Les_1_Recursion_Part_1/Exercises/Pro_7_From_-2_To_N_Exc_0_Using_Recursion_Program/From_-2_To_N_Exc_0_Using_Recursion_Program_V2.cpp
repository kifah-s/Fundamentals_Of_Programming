
//* From -2 To N Exc 0 Using Recursion Program (Version 2).

/*
* Write a program that prompts the user to enter an integer 'num' and then,
* prints the numbers from -2 to 'num' in ascending order, excluding zero.

! Input:
! Please, enter a number: 5

! Output:
! Numbers from -2 to 5: -2 -1 1 2 3 4 5
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
    cout << "\n\nYou welcome in From -2 To N Exc 0 Using Recursion Program (Version 2) ..\n"
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

// Recursion - Function.
void recursionFun(int n)
{
    if (n > -3) // Base case.
    {
        if (n == 0)
        {
            recursionFun(n - 1); // Recursive call.
        }
        else
        {
            recursionFun(n - 1); // Recursive call.
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
    cout << "Numbers from -2 To " << myNumber << ": ";
    recursionFun(myNumber);

    cout << "\n"
         << endl;
}
//* End Function ..
