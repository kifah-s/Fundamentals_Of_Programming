
//* Two Numbers As Input Program (Version 1).

/*
* Write a program that takes two numbers as input (width and height) and prints a hollow rectangle pattern of alphabets.


! Input:
! Please, enter width: 4
! Please, enter height: 5

! Output:
! ABCD
! A  D
! A  D
! A  D
! ABCD
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int wid, int hei);

int main()
{
    // Declare Variables.
    int width = 0, height = 0;
    ;

    // Call Functions.
    resultFun(width, height);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Two Numbers As Input Program (Version 1) ..\n"
         << endl;
}

// Get Width - Function.
int getWidthFun(int wid)
{
    cout << "Please, enter Width: ";
    cin >> wid;

    return wid;
}

// Get Height - Function.
int getHeightFun(int hei)
{
    cout << "Please, enter Height: ";
    cin >> hei;

    return hei;
}

// Print Zeros Along Both Diagonals - Function.
void printZerosAlongBothDiagonalsFun(int wid, int hei)
{
    wid = getWidthFun(wid);
    hei = getHeightFun(hei);

    for (int i = 1; i <= hei; i++)
    {
        for (int j = 1; j <= wid; j++)
        {
            if (i == 1 || i == hei || j == 1 || j == wid)
            {
                cout << char('A' + j - 1);
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

// Result - Function.
void resultFun(int wid, int hei)
{
    printWelcomeMessageFun();
    printZerosAlongBothDiagonalsFun(wid, hei);

    cout << "\n"
         << endl;
}
//* End Function ..
