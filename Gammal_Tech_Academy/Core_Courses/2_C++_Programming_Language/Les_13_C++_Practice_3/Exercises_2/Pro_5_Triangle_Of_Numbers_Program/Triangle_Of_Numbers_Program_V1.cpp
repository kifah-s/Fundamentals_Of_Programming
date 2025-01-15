
//* Triangle Of Numbers Program (Version 1).

/*
* Write a program to print an triangle of numbers with 4 rows.

! Output:
! 1
! 1 2
! 1 2 3
! 1 2 3 4
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
    cout << "\n\nYou welcome in Triangle Of Numbers Program (Version 1) ..\n"
         << endl;
}

// Print Triangle Of Numbers - Function.
void printTriangleOfNumbersFun()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    printTriangleOfNumbersFun();

    cout << "\n"
         << endl;
}
//* End Function ..
