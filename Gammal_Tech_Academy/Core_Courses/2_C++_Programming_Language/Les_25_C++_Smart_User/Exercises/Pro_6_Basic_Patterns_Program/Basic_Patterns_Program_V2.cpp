
//* Basic Patterns Program (Version 2).

/*
* Develop an interactive and user-friendly program for drawing basic patterns,
* The program should allow users to choose between a square and a triangle,
* specifying the size of the pattern. Additionally,
* users should have the option to exit the program.

! Input & Output:
! Choose a pattern to draw:
! 1. Square
! 2. Triangle
! 3. Exit

! Please, enter your choice: 1
! Please, enter the size of the pattern: 5

! Drawing Square:
! * * * * *
! * * * * *
! * * * * *
! * * * * *
! * * * * *

! Choose a pattern to draw:
! 1. Square
! 2. Triangle
! 3. Exit

! Please, enter your choice: 2
! Please, enter the size of the pattern: 4

! Drawing Square:
! *
! * *
! * * *
! * * * *

! Choose a pattern to draw:
! 1. Square
! 2. Triangle
! 3. Exit

! Please, enter your choice: 3

! Exiting program, Good Bye.
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
    cout << "\n\nYou welcome in Basic Patterns Program (Version 2) ..\n"
         << endl;
}

// Display Screen - Function.
void displayScreenFun()
{
    cout << "Choose a pattern to draw:" << endl;
    cout << "1. Square." << endl;
    cout << "2. Triangle." << endl;
    cout << "3. Exit." << endl;
}

// Choice - Function.
int choiceFun(int cho)
{
    cout << "Please, enter your choice: ";
    cin >> cho;

    return cho;
}

// Size Of Pattern - Function.
int sizeOfPatternFun(int sizeOf)
{
    cout << "Please, enter the size of the pattern: ";
    cin >> sizeOf;

    return sizeOf;
}

// Draw Square - Function.
void drawSquareFun(int sizeOf)
{
    for (int i = 0; i < sizeOf; i++)
    {
        for (int j = 0; j < sizeOf; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Draw Triangle - Function.
void drawTriangleFun(int sizeOf)
{
    for (int i = 0; i < sizeOf; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Exit - Function.
void exitFun()
{
    cout << "\nExiting program, Good Bye.";
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    int choice = 0, sizeOfPattern = 0;

    // Call Functions.
    do
    {
        displayScreenFun();
        choice = choiceFun(choice);

        if (choice == 1)
        {
            sizeOfPattern = sizeOfPatternFun(sizeOfPattern);
            drawSquareFun(sizeOfPattern);
        }
        else if (choice == 2)
        {
            sizeOfPattern = sizeOfPatternFun(sizeOfPattern);
            drawTriangleFun(sizeOfPattern);
        }
        else if (choice == 3)
        {
            exitFun();
        }

    } while (choice != 3);

    cout << "\n"
         << endl;
}
//* End Function ..
