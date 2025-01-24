
//* Print Numbers Program (Version 1).

/*
* Write a program that prompts the user to enter the number of rows and then generates a number pyramid,
* The program should print numbers in each row from 1 to the row number, separated by a space.

! Input:
! Please enter number of rows: 5

! Output:
! 1
! 1 2
! 1 2 3
! 1 2 3 4
! 1 2 3 4 5
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
    cout << "\n\nYou welcome in Print Numbers Program (Version 1) ..\n"
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
