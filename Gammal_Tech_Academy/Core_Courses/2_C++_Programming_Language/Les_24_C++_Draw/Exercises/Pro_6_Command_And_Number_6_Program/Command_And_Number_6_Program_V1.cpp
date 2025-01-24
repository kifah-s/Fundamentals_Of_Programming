
//* Command And Number 6 Program (Version 1).

/*
* Extend the program to provide more user-friendly output messages,
* When the user inputs a command, display a message indicating the action being performed.

! Input & Output:
! Please enter a command ("star", "space", "line", "triangle", OR "exit" to end ): triangle
! Please enter a number: 3

! Please enter a command ("star", "space", "line", "triangle", OR "exit" to end ): star
! Please enter a number: 2
!

! Please enter a command ("star", "space", "line", "triangle", OR "exit" to end ): exit
! Please enter a number: 0

! Drawing a triangle with 3 rows.
! *
! **
! ***

! Drawing 2 stars.
! **
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
    cout << "\n\nYou welcome in Command And Number 6 Program (Version 1) ..\n"
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
    string triangle, star, space, line;

    if (comm == "star")
    {
        for (int i = 0; i < num; i++)
        {
            star = star + "*";
        }
        myVec.push_back("\nDrawing stars: \n");
        myVec.push_back(star);
    }
    else if (comm == "space")
    {
        for (int i = 0; i < num; i++)
        {
            space = space + " ";
        }
        myVec.push_back("\nDrawing spaces: \n");
        myVec.push_back(space);
    }
    else if (comm == "line")
    {
        for (int i = 0; i < num; i++)
        {
            line = line + "\n";
        }
        myVec.push_back("\nDrawing lines: \n");
        myVec.push_back(line);
    }
    else if (comm == "triangle")
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                triangle = triangle + "*";
            }
            triangle = triangle + "\n";
        }
        myVec.push_back("\nDrawing triangle: \n");
        myVec.push_back(triangle);
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
