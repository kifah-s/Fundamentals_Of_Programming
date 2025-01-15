
//* Pascals Triangle Program (Version 1).

/*
* Create a program that takes an input for the number of rows and generates Pascal's Triangle up to the specified number of rows,
* Output the triangle with appropriate spacing.

! Input:
! Please, enter a rows: 5

! Output:
!         1
!       1   1
!     1   2   1
!   1   3   3   1
! 1   4   6   4   1
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int r, int c);

int main()
{
    // Declare Variables.
    int rows = 0, coef = 1;

    // Call Functions.
    resultFun(rows, coef);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Pascals Triangle Program (Version 1) ..\n"
         << endl;
}


// Get Rows - Function.
int getRowsFun(int r)
{
    cout << "Please, enter a rows: ";
    cin >> r;

    return r;
}

// Print Pascals Triangle - Function.
void printPascalsTriangleFun(int r, int c)
{
    r = getRowsFun(r);

    for (int i = 0; i < r; i++)
    {
        for (int space = 1; space <= r - i; space++)
        {
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            if (k == 0 || i == 0)
            {
                c = 1;
            }
            else
            {
                c = c * (i - k + 1) / k;
            }

            cout << c  << " ";
        }
        cout << endl;
    }
}

// Result - Function.
void resultFun(int r, int c)
{
    printWelcomeMessageFun();
    printPascalsTriangleFun(r, c);

    cout << "\n"
         << endl;
}
//* End Function ..
