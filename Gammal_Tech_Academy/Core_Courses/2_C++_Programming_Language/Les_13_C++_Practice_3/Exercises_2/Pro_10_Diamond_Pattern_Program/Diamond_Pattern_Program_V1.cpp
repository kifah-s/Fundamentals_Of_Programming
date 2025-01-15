
//* Diamond Pattern Program (Version 1).

/*
* Develop a straightforward program that generates a diamond pattern based on the user-provided number of rows,
* Keep the program simple and easy to comprehend.

! Input:
! Please, enter a rows: 5

! Output:
!         *
!       * * *
!     * * * * *
!   * * * * * * *
! * * * * * * * * *
!   * * * * * * *
!     * * * * *
!       * * *
!         *
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int r);

int main()
{
    // Declare Variables.
    int rows = 0;

    // Call Functions.
    resultFun(rows);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Diamond Pattern Program (Version 1) ..\n"
         << endl;
}

// Get Rows - Function.
int getRowsFun(int r)
{
    cout << "Please, enter a rows: ";
    cin >> r;

    return r;
}

// Print Diamond Pattern - Function.
void printDiamondPatternFun(int r)
{
    r = getRowsFun(r);

    for (int i = 1; i <= r; i++)
    {
        for (int space = 1; space <= r - i; space++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    for (int i = r - 1; i >= 1; i--)
    {
        for (int space = 1; space <= r - i; space++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Result - Function.
void resultFun(int r)
{
    printWelcomeMessageFun();
    printDiamondPatternFun(r);

    cout << "\n"
         << endl;
}
//* End Function ..
