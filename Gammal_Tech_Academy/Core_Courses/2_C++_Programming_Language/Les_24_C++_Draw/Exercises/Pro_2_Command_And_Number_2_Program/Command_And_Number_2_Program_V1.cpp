
//* Command And Number 2 Program (Version 1).

/*
* Modify the previous program to include an exit option,
* The program should continue accepting commands and counts until the user enters "exit."

! Input & Output:
! Please enter a command ("star", "space", "line", OR "exit" to end ): star
! Please enter a number: 5
! *****

! Please enter a command ("star", "space", "line", OR "exit" to end ): space
! Please enter a number: 3
!   

! Please enter a command ("star", "space", "line", OR "exit" to end ): exit
! Please enter a number: 0
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
    cout << "\n\nYou welcome in Command And Number 2 Program (Version 1) ..\n"
         << endl;
}

// Get Command - Function.
string getCommandFun(string comm)
{
    cout << "Please enter a command (\"star\", \"space\", \"line\", OR \"exit\" to end ): ";
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
        cout << "\n";
        for (int i = 0; i < num; i++)
        {
            cout << '*';
        }
        cout << "\n\n";
    }
    else if (comm == "space")
    {
        cout << "\n";
        for (int i = 0; i < num; i++)
        {
            cout << ' ';
        }
        cout << "\n\n";
    }
    else if (comm == "line")
    {
        cout << "\n";
        for (int i = 0; i < num; i++)
        {
            cout << '-';
        }
        cout << "\n\n";
    }

    // cout << "\n";
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
    // cout << "\n\n";
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
    
    // do
    // {
    //     command = getCommandFun(command);
    //     number = getNumberFun(number);
    //     drawShapeFun(command, number);
    // } while (command != "exit");

    while (command != "exit")
    {
        command = getCommandFun(command);
        number = getNumberFun(number);
        drawShapeFun(command, number);
    }

    cout << "\n"
         << endl;
}
//* End Function ..
