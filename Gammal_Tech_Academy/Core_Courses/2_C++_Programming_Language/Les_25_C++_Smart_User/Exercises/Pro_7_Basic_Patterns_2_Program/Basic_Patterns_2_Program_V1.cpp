
//* Basic Patterns 2 Program (Version 1).

/*
* Write a program that allows users to draw a simple pattern using predefined symbols,
* The program should include the following features:
* Users can choose from a list of symbols ("*", "#", "$") to create a pattern.
* Users can specify the number of rows for the pattern.
* Implement the necessary functions to achieve this functionality.
* Ensure the program handles invalid symbol selections gracefully.

! Input & Output:
! Choose a pattern to draw:
! 1. Square
! 2. Triangle
! 3. Exit

! Please, enter your choice: 1
! Please, enter the size of the pattern: 5
! Please, choose a symbool to draw ("*", "#", "$"): *

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
! Please, choose a symbool to draw ("*", "#", "$"): $

! Drawing Square:
! $
! $ $
! $ $ $
! $ $ $ $

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
    cout << "\n\nYou welcome in Basic Patterns 2 Program (Version 1) ..\n"
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

// choose a Symbool - Function.
char chooseSymboolFun(char c)
{
    cout << "Please, choose a symbool to draw (\"*\", \"#\", \"$\"): ";
    cin >> c;

    // if (c == '*' || c == '#' || c == '$')
    // {
    //     return c;
    // }
    // else
    // {
    //     chooseSymboolFun(c);
    // }

    return c;
}

// Draw Square - Function.
void drawSquareFun(int sizeOf, char c)
{
    for (int i = 0; i < sizeOf; i++)
    {
        for (int j = 0; j < sizeOf; j++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}

// Draw Triangle - Function.
void drawTriangleFun(int sizeOf, char c)
{
    for (int i = 0; i < sizeOf; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
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
    char symbool;

    // Call Functions.
    do
    {
        displayScreenFun();
        choice = choiceFun(choice);

        switch (choice)
        {
        case 1:
            sizeOfPattern = sizeOfPatternFun(sizeOfPattern);
            symbool = chooseSymboolFun(symbool);
            drawSquareFun(sizeOfPattern, symbool);
            break;

        case 2:
            sizeOfPattern = sizeOfPatternFun(sizeOfPattern);
            symbool = chooseSymboolFun(symbool);
            drawTriangleFun(sizeOfPattern, symbool);
            break;

        case 3:
            exitFun();
            break;
        }

    } while (choice != 3);

    cout << "\n"
         << endl;
}
//* End Function ..
