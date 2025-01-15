
//* Inverted Triangle Program (Version 1).

/*
* Write a program to print an inverted triangle with 4 rows.

! Output:
! * * * *
! * * *
! * *
! *
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
    cout << "\n\nYou welcome in Inverted Triangle Program (Version 1) ..\n"
         << endl;
}

// Print Inverted Triangle - Function.
void printInvertedTriangleFun()
{
    for (int i = 4; i >= 0; i--)
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
    printInvertedTriangleFun();

    cout << "\n"
         << endl;
}
//* End Function ..
