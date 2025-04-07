
//* Dynamically Allocates Memory For Integer 2 Program (Version 2).

/*
* Write a program that prompts the user to enter an integer 'num' and then prints the odd numbers from 1 to 'num' in ascending order.

! Output:
! Please, enter a number: 8

! Output:
! Even numbers form 1 to 8 is: 1 3 5 7
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Integer 2 Program (Version 2) ..\n"
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

// Print Odd Numbers - Function.
void printOddNumbersFun(int myNum)
{
    if (myNum > 0)
    {
        printOddNumbersFun(myNum - 1);

        if (myNum % 2 != 0)
        {
            cout << myNum << " ";
        }
    }
}

// Result - Function.
void resultFun()
{
    // Declare Pointer and Variables.
    int myNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();
    cout << "Even Numbers form 1 to " << myNumber << " is: ";
    printOddNumbersFun(myNumber);

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
