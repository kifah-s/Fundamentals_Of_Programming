
//* Terms of Sequence Using Recursion Program (Version 1).

/*
* Write a program to print the first N terms of a sequence using recursion.

! Input:
! Please, enter the number of terms: 5

! Output:
! first 5 terms of the sequence: 1 3 5 7 9
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <cstring>
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
    cout << "\n\nYou welcome in Terms of Sequence Using Recursion Program (Version 1) ..\n"
         << endl;
}

// Get number - Function.
int getNumberFun()
{
    int num = 0;

    cout << "Please, enter the number of terms: ";
    cin >> num;

    return num;
}

// Print Sequence - Recursion Function.
void printSequenceRecFun(int n, int term = 1)
{
    if (n > 0)
    {
        cout << term << " ";
        printSequenceRecFun(n - 1, term + 2);
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int number = 0;

    // Call Functions.
    printWelcomeMessageFun();
    number = getNumberFun();

    cout << "First " << number << "terms of the sequence: ";
    printSequenceRecFun(number);

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
