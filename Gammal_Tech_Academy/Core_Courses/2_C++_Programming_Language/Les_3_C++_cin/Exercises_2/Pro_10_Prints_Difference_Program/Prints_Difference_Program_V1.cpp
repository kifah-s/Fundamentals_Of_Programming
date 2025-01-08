

//* Prints Difference Program (Version 1).

/*
* Write a program that takes two integers as input and prints their difference.

! Input:
! Please, enter two numbers:
! First number: 5
! Second number: 7

! Output:
! Difference: -2
*/

#include <iostream>

using namespace std;

void resultFun(int firNum, int secNum, int diff);

int main()
{
    // Declare Variables.
    int firstNumber = 0, secondNumber = 0, differenceNumbers = 0;

    // Call Functions.
    resultFun(firstNumber, secondNumber, differenceNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Prints Difference Program (Version 1) ..\n"
         << endl;
}

// Get First Number - Function.
int getFirstNumberFun(int firNum)
{
    cout << "Please, enter two numbers:\n";
    cout << "First Number: ";
    cin >> firNum;

    return firNum;
}

// Get Second Number - Function.
int getSecondNumberFun(int secNum)
{
    cout << "Second Number: ";
    cin >> secNum;

    return secNum;
}

// Difference Numbers - Function.
int differenceNumbersFun(int firNum, int secNum, int diff)
{
    diff = firNum - secNum;

    return diff;
}

// Result - Function.
void resultFun(int firNum, int secNum, int diff)
{
    printWelcomeMessageFun();
    firNum = getFirstNumberFun(firNum);
    secNum = getSecondNumberFun(secNum);
    diff = differenceNumbersFun(firNum, secNum, diff);

    cout << "\nDifference Numbers: " << diff << "\n\n"
         << endl;
}
//* End Function ..
