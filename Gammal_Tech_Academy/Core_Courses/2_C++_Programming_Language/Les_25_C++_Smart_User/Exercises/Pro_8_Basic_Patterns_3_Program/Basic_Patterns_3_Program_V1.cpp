
//* Basic Patterns 3 Program (Version 1).

/*
* Write a program that allows users to add custom symbols and draw patterns using those symbols.
* The program should offer the following functionalities:
* Add Symbols: Allow users to add custom symbols by providing a name and the corresponding symbol.
* Draw Pattern: Enable users to draw patterns using the previously defined symbols.
* Users can specify the repetition count for each symbol,
* and the program will display the resulting pattern.
* Exit: Provide an option to exit the program.

! Input & Output:
! What would you like to do:
! 1. Add symbols.
! 2. Draw.
! 3. Exit.

! Please, enter your choice: 1
! Symbols currently available ($, #, *).
! Please, add symbol name: smile
! Please, add symbol: :)
! symbol added successfully.

! What would you like to do:
! 1. Add symbols.
! 2. Draw.
! 3. Exit.

! Please, enter your choice: 2

! Choose a pattern to draw:
! 1. Square.
! 2. Triangle.
! 3. Back.

! Please, enter your choice: 1
! Please, enter the size of the pattern: 5
! Please, choose a symbool to draw (*, #, $, :)): *

! Drawing Square:
! * * * * *
! * * * * *
! * * * * *
! * * * * *
! * * * * *

! Choose a pattern to draw:
! 1. Square.
! 2. Triangle.
! 3. Back.

! Please, enter your choice: 2
! Please, enter the size of the pattern: 4
! Please, choose a symbool to draw (*, #, $, :)): $

! Drawing Square:
! $
! $ $
! $ $ $
! $ $ $ $

! Choose a pattern to draw:
! 1. Square.
! 2. Triangle.
! 3. Back

! Please, enter your choice: 3

! What would you like to do:
! 1. Add symbols.
! 2. Draw.
! 3. Exit.

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
    cout << "\n\nYou welcome in Basic Patterns 3 Program (Version 1) ..\n"
         << endl;
}

// Interface 1 - Function.
void interface_1_Fun()
{
    cout << "What would you like to do:" << endl;
    cout << "1. Add symbols." << endl;
    cout << "2. Draw." << endl;
    cout << "3. Exit." << endl;
}

// Review Symbools - Function.
map<string, string> reviewSymboolsFun(map<string, string> mySym)
{
    mySym["*"] = "*";
    mySym["$"] = "$";
    mySym["#"] = "#";

    cout << "Symbols currently available: ";
    for (const auto &symbool : mySym)
    {
        cout << symbool.second << ", ";
    }
    cout << endl;

    return mySym;
}

// Add Symbool - Function.
map<string, string> addSymboolFun(map<string, string> mySym)
{
    string symName, sym;

    cout << "Please, add symbol name: ";
    cin >> symName;

    cout << "Please, add symbol: ";
    cin >> sym;

    mySym[symName] = sym;
    cout << "Symbol added successfully.\n"
         << endl;

    return mySym;
}

// Interface 2 - Function.
void interface_2_Fun()
{
    cout << "Choose a pattern to draw:" << endl;
    cout << "1. Square." << endl;
    cout << "2. Triangle." << endl;
    cout << "3. Back" << endl;
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
string chooseSymboolFun(string c, map<string, string> mySym)
{
    // mySym = reviewSymboolsFun(mySym);
    cout << "Please, choose a symbool to draw: ";
    cin >> c;

    bool found = false;
    for (const auto &symbool : mySym)
    {
        if (symbool.second.find(c) != string::npos)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        return c;
    }
    else
    {
        cout << "Invalid symbol, please try again." << endl;
        return chooseSymboolFun(c, mySym);
    }
}

// Draw Square - Function.
void drawSquareFun(int sizeOf, string c)
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
void drawTriangleFun(int sizeOf, string c)
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
    int choice = 0;
    map<string, string> mySymbools;
    int sizeOfPattern = 0;
    string symbool;

    // Call Functions.
    do
    {
        interface_1_Fun();
        choice = choiceFun(choice);

        switch (choice)
        {
        case 1:
            reviewSymboolsFun(mySymbools);
            mySymbools = addSymboolFun(mySymbools);
            break;

        case 2:
            interface_2_Fun();
            choice = choiceFun(choice);
            switch (choice)
            {
            case 1:
                sizeOfPattern = sizeOfPatternFun(sizeOfPattern);
                mySymbools = reviewSymboolsFun(mySymbools);
                symbool = chooseSymboolFun(symbool, mySymbools);
                drawSquareFun(sizeOfPattern, symbool);
                break;

            case 2:
                sizeOfPattern = sizeOfPatternFun(sizeOfPattern);
                mySymbools = reviewSymboolsFun(mySymbools);
                symbool = chooseSymboolFun(symbool, mySymbools);
                drawTriangleFun(sizeOfPattern, symbool);
                break;

            case 3:
                resultFun();
                break;
            }
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
