
//* Dynamically Allocates Memory For Integer Program (Version 2).

/*
* Write a program that prompts the user to enter an integer 'num' and then prints the even numbers from 1 to 'num' in ascending order.

! Output:
! Please, enter a number: 7

! Output:
! Even numbers form 1 to 7 is: 2 4 6
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
    cout << "\n\nYou welcome in Dynamically Allocates Memory For Integer Program (Version 2) ..\n"
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

// Print Even Numbers - Function.
void printEvenNumbersFun(int myNum)
{
    if (myNum > 0)
    {
        printEvenNumbersFun(myNum - 1);

        if (myNum % 2 == 0)
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
    printEvenNumbersFun(myNumber);

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
