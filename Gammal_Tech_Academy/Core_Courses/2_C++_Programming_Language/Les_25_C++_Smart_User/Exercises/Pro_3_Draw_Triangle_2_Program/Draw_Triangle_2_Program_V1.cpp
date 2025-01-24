
//* Draw Triangle 2 Program (Version 1).

/*
* Draw Left-aligned Right-Angled Triangle

! Input:
! Please, enter the hight of the left-aligned right-aligned triangle: 5

! Output:
! * * * * *
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
    cout << "\n\nYou welcome in Draw Triangle 2 Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Rows - Function.
int getNumberOfRowsFun(int numOf)
{
    cout << "Please, enter the hight of the left-aligned right-aligned triangle: ";
    cin >> numOf;

    return numOf;
}

// Draw Shape - Function.
void drawShapeFun(int numOf)
{
    // for (int i = numOf; i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    for (int i = 0; i < numOf; i++)
    {
        for (int j = numOf; j > i; j--)
        {
            cout << "* ";
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
