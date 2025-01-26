
//* Draw Shape Program (Version 1).

/*
* Draw Shape

! Input:
! Please enter the character you want to print in the last row: E

! Output:
! A
! B B
! C C C
! D D D D
! E E E E E
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
    cout << "\n\nYou welcome in Draw Shape Program (Version 1) ..\n"
         << endl;
}

// Get Character - Function.
char getCharacterFun(char c)
{
    cout << "Please, enter the uppercase character you want to print in the last row: ";
    cin >> c;

    return c;
}

// Draw Shape - Function.
void drawShapeFun(char c)
{
    for (int i = 'A'; i <= c; i++)
    {
        for (int j = 'A'; j <= i; j++)
        {
            cout << (char)i << " ";
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
    char myChar;

    // Call Functions.
    myChar = getCharacterFun(myChar);
    drawShapeFun(myChar);

    cout << "\n"
         << endl;
}
//* End Function ..
