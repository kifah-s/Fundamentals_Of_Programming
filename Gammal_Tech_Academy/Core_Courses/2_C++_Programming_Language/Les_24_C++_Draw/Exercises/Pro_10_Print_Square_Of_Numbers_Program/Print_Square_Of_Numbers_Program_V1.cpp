
//* Print Square Of Numbers Program (Version 1).

/*
* create the program to generate a pyramid where each row displays the square of the row number,
* The program should print the square of numbers in ascending order on each row, separated by a space.

! Input:
! Please enter number of rows: 5

! Output:
! 1
! 1 4
! 1 4 9
! 1 4 9 16
! 1 4 9 16 25
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
    cout << "\n\nYou welcome in Print Square Of Numbers Program (Version 1) ..\n"
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
        for (int j = 1; j <= i; j++)
        {
            cout << j * j << " ";
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
