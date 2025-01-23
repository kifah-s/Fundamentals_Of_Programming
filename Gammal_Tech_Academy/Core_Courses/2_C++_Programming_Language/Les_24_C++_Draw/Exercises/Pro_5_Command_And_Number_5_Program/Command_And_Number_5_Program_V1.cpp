
//* Command And Number 5 Program (Version 1).

/*
* Extend the previous program to handle a new command "triangle",
* When the user inputs "triangle", the program should print a triangle made of stars.

! Input & Output:
! Please enter a command ("star", "space", "line", "triangle", OR "exit" to end ): star
! Please enter a number: 5

! Please enter a command ("star", "space", "line", "triangle", OR "exit" to end ): line
! Please enter a number: 1
!

! Please enter a command ("star", "space", "line", "triangle", OR "exit" to end ): "triangle",
! Please enter a number: 4

! *****
! *
! **
! ***
! ****
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
    cout << "\n\nYou welcome in Command And Number 5 Program (Version 1) ..\n"
         << endl;
}

// Get Command - Function.
string getCommandFun(string comm)
{
    cout << "Please enter a command (\"star\", \"space\", \"line\", \"triangle\", OR \"exit\" to end ): ";
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

// Add Elements To Vector - Function.
vector<string> addElementsToVectorFun(vector<string> myVec, string comm, int num)
{
    string star;

    if (comm == "star")
    {
        for (int i = 0; i < num; i++)
        {
            myVec.push_back("*");
        }
    }
    else if (comm == "space")
    {
        for (int i = 0; i < num; i++)
        {
            myVec.push_back(" ");
        }
    }
    else if (comm == "line")
    {
        for (int i = 0; i < num; i++)
        {
            myVec.push_back("\n");
        }
    }
    else if (comm == "triangle")
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                star = star + "*";
            }
            star = star + "\n";
        }
        myVec.push_back(star);
    }

    return myVec;
}

// Draw Shape - Function.
void drawShapeFun(vector<string> myVec)
{
    cout << "\n";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i];
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    vector<string> myVector;
    string command;
    int number = 0;

    // Call Functions.
    do
    {
        command = getCommandFun(command);
        number = getNumberFun(number);
        myVector = addElementsToVectorFun(myVector, command, number);
    } while (command != "exit");

    drawShapeFun(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
