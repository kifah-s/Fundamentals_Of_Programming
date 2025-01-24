
//* Descending Order Program (Version 1).

/*
* Modify the previous program to generate a pyramid with numbers in descending order on each row,
* The program should print numbers from the row number down to 1, separated by a space.

! Input:
! Please enter number of rows: 5

! Output:
! 1
! 2 1
! 3 2 1
! 4 3 2 1
! 5 4 3 2 1
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
    cout << "\n\nYou welcome in Descending Order Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Rows - Function.
int getNumberOfRowsFun(int numOf)
{
    cout << "Please enter a number of rows: ";
    cin >> numOf;

    return numOf;
}

// Draw Shape - Function.
void drawShapeFun(int numOf)
{
    for (int i = 1; i <= numOf; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
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
