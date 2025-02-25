
//* From N To -2 Using Recursion Program (Version 2).

/*
* Write a program that takes an integer input 'num' from the user and prints the numbers from 'num' to -2,
* in decreasing order. using recursion

! Input:
! Please, enter a number: 5

! Output:
! Numbers from 5 to -2: 5 4 3 2 1 0 -1 -2
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
    cout << "\n\nYou welcome in From N To -2 Using Recursion Program (Version 2) ..\n"
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
    if (n >= -2) // Base case.
    {
        cout << n << " ";
        recursionFun(n - 1); // Recursive call.
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
    cout << "Numbers from " << myNumber << " To -2: ";
    recursionFun(myNumber);

    cout << "\n"
         << endl;
}
//* End Function ..
