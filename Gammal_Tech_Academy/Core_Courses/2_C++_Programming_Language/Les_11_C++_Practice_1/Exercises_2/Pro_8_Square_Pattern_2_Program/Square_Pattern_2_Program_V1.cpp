
//* Square Pattern 2 Program (Version 1).

/*
* Write a program that takes a number as input from the user and prints a hollow square pattern of stars,
* The number represents the side length of the square.


! Input:
! Please, enter a number: 5

! Output:
! * * * * *
! *       *
! *       *
! *       *
! * * * * *
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int num, char sym, char spa);

int main()
{
    // Declare Variables.
    int number = 0;
    char symbol = '*', space = ' ';

    // Call Functions.
    resultFun(number, symbol, space);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Square Pattern 2 Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Print Shape - Function.
void printShapeFun(int num, char sym, char spa)
{
    num = getNumberFun(num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (i == 1 || i == num || j == 1 || j == num)
            {
                cout << sym << " ";
            }
            else
            {
                cout << spa << " ";
            }
        }
        cout << "\n";
    }
}

// Result - Function.
void resultFun(int num, char sym, char spa)
{
    printWelcomeMessageFun();
    printShapeFun(num, sym, spa);

    cout << "\n"
         << endl;
}
//* End Function ..
