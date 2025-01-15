
//* Zeros Along Both Diagonals Program (Version 1).

/*
* Write a program that takes a number as input and prints a square pattern of numbers with zeros along both diagonals.


! Input:
! Please, enter a number: 4

! Output:
! 1000
! 0100
! 0010
! 0001
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int num);

int main()
{
    // Declare Variables.
    int number = 0;

    // Call Functions.
    resultFun(number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Zeros Along Both Diagonals Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Print Zeros Along Both Diagonals - Function.
void printZerosAlongBothDiagonalsFun(int num)
{
    num = getNumberFun(num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (i == j)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    printZerosAlongBothDiagonalsFun(num);

    cout << "\n"
         << endl;
}
//* End Function ..
