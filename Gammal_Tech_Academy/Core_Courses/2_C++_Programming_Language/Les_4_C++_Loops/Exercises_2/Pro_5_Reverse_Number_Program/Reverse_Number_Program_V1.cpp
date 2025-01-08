

//* Reverse Number Program (Version 1).

/*
* Write a program to reverse a given number using a for loop.

! Input:
! Please, enter a number: 1234

! Output:
! Revers Number: 4321
*/

#include <iostream>

using namespace std;

void resultFun(int num, int revNum);

int main()
{
    // Declare Variables.
    int number = 0, revNum = 0;

    // Call Functions.
    resultFun(number, revNum);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Reverse Number Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Revers Number - Function.
int reversNumberFun(int num, int revNum)
{
    int digit = 0;

    for (; num != 0;)
    {
        digit = num % 10;
        revNum = (revNum * 10) + digit;
        num = num / 10;
    }

    return revNum;
}

// Result - Function.
void resultFun(int num, int revNum)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    revNum = reversNumberFun(num, revNum);

    cout << "Revers Number: " << revNum << "\n\n"
         << endl;
}
//* End Function ..
