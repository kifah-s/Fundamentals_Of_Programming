
//* Pattern Of Numbers Program (Version 1).

/*
* Write a program that takes a number as input from the user and prints a half pyramid pattern of numbers,
* The number represents the number of lines in the pyramid.


! Input:
! Please, enter a number: 6

! Output:
! 1
! 12
! 123
! 1234
! 12345
! 123456
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
    cout << "\n\nYou welcome in Pattern Of Numbers Program (Version 1) ..\n"
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
void printShapeFun(int num)
{
    num = getNumberFun(num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    printShapeFun(num);

    cout << "\n"
         << endl;
}
//* End Function ..
