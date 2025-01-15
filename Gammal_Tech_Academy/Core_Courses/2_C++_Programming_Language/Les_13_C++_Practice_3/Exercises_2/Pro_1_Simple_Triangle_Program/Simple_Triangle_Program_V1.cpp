
//* Simple Triangle Program (Version 1).

/*
* Write a program to print a simple triangle with 5 rows.

! Output:
! *
! * *
! * * *
! * * * *
! * * * * *
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun();

int main()
{
    // Declare Variables.

    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Simple Triangle Program (Version 1) ..\n"
         << endl;
}

// Print Simple Triangle - Function.
void printSimpleTriangleFun()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    printSimpleTriangleFun();

    cout << "\n"
         << endl;
}
//* End Function ..
