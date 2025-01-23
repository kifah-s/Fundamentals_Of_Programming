
//* Command And Number Program (Version 1).

/*
* Write a program that prompts the user for a command (either "star," "space," or "line") and a number,
* and then executes the command the specified number of times.

! Input:
! Please enter a command ("star", "space", or "line"): star
! Please enter a number: 5

! Output:
! *****
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
    cout << "\n\nYou welcome in Command And Number Program (Version 1) ..\n"
         << endl;
}

// Get Command - Function.
string getCommandFun(string comm)
{
    cout << "Please enter a command (\"star\", \"space\", or \"line\"): ";
    cin >> comm;

    return comm;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please enter a number: ";
    cin >> num;

    return num;
}

// Draw Shape - Function.
void drawShapeFun(string comm, int num)
{
    if (comm == "star")
    {
        cout << '\n';
        for (int i = 0; i < num; i++)
        {
            cout << '*';
        }
    }
    else if (comm == "space")
    {
        cout << '\n';
        for (int i = 0; i < num; i++)
        {
            cout << ' ';
        }
    }
    else if (comm == "line")
    {
        cout << '\n';
        for (int i = 0; i < num; i++)
        {
            cout << '-';
        }
    }

    // cout << '\n';
    // for (int i = 0; i < num; i++)
    // {
    //     if (comm == "star")
    //     {
    //         cout << '*';
    //     }
    //     else if (comm == "space")
    //     {
    //         cout << ' ';
    //     }
    //     else if (comm == "line")
    //     {
    //         cout << '-';
    //     }
    // }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string command;
    int number = 0;

    // Call Functions.
    command = getCommandFun(command);
    number = getNumberFun(number);
    drawShapeFun(command, number);

    cout << "\n"
         << endl;
}
//* End Function ..
