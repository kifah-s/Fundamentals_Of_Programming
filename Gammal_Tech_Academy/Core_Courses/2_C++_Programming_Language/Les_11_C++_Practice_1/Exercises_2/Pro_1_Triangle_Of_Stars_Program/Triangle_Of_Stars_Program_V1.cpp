
//* Triangle Of Stars Program (Version 1).

/*
* Write a program that takes a number as input from the user and prints a triangle of stars,
* The number represents the number of lines in the triangle,
* Each line should contain stars equal to the line number.


! Input:
! Please, enter a number: 4

! Output:
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

using namespace std;

void resultFun(int num, char sym);

int main()
{
    // Declare Variables.
    int number = 0;
    char symbol = '*';

    // Call Functions.
    resultFun(number, symbol);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Triangle Of Stars Program (Version 1) ..\n"
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
void printShapeFun(int num, char sym)
{
    num = getNumberFun(num);

    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << sym;
        }
        cout << "\n";
    }
}

// Result - Function.
void resultFun(int num, char sym)
{
    printWelcomeMessageFun();
    printShapeFun(num, sym);

    cout << "\n"
         << endl;
}
//* End Function ..
