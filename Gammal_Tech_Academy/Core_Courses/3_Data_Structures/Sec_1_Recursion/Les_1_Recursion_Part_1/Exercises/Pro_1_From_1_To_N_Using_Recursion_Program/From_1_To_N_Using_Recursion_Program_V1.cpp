
//* From 1 To N Using Recursion Program (Version 1).

/*
* Write a program to print numbers from 1 to N using recursion.

! Input:
! Please, enter a number: 5

! Output:
! Numbers from 1 to 5: 1 2 3 4 5
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
    cout << "\n\nYou welcome in From 1 To N Using Recursion Program (Version 1) ..\n"
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
    if (n == 0) // Base case.
    {
        return;
    }
    else // Recursive call.
    {
        recursionFun(n - 1);
        cout << n << " ";
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
    cout << "Numbers from 1 to " << myNumber << ": ";
    recursionFun(myNumber);

    cout << "\n"
         << endl;
}
//* End Function ..
