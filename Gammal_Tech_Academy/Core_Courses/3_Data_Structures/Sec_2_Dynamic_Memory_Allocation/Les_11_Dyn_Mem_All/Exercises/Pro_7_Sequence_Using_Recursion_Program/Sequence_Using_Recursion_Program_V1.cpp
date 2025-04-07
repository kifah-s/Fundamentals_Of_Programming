
//* Sequence Using Recursion Program (Version 1).

/*
* Write a program to print the first N terms of a sequence using recursion.

! Output:
! Please, enter a number: 5

! Output:
! First 5 terms of the sequence: 1 3 5 7 9.
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
    cout << "\n\nYou welcome in Sequence Using Recursion Program (Version 1) ..\n"
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

// Sequence - Function.
void sequenceFun(int myNum, int term = 1)
{
    if (myNum > 0)
    {
        cout << term << " ";
        sequenceFun(myNum - 1, term + 2);
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
    cout << "First " << myNumber << "terms of the sequence: ";
    sequenceFun(myNumber);

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
