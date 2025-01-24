
//* Draw Diagonal Line Program (Version 1).

/*
* Draw Diagonal Line

! Input:
! Please, enter the size the diagonal line: 7

! Output:
!  *
!    *
!      *
!        *
!          *
!            *
!              *
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
    cout << "\n\nYou welcome in Draw Diagonal Line Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Rows - Function.
int getNumberOfRowsFun(int numOf)
{
    cout << "Please, enter the size the diagonal line: ";
    cin >> numOf;

    return numOf;
}

// Draw Shape - Function.
void drawShapeFun(int numOf)
{
    // for (int i = 0; i <= numOf; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if (j == i - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << "\n";
    // }

    for (int i = 0; i < numOf; i++)
    {
        for (int j = 0; j < numOf; j++)
        {
            if (j == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    int numberOfRows = 0;

    // Call Functions.
    numberOfRows = getNumberOfRowsFun(numberOfRows);
    drawShapeFun(numberOfRows);

    cout << "\n"
         << endl;
}
//* End Function ..
