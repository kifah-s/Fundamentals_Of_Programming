

//* Difference Program (Version 1).

/*
* Write a program that takes two integers as input and prints their difference.


! Input:
! Please, enter two numbers:
! first number: 5
! second number: 7

! Output:
! Difference: -2
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int firNum, int secNum, int dif);

int main()
{
    // Declare Variables.
    int firstNumber = 0, secondNumber = 0, difference = 0;

    // Call Functions.
    resultFun(firstNumber, secondNumber, difference);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Difference Program (Version 1) ..\n"
         << endl;
}

// Get First Number - Function.
int getFirstNumberFun(int firNum)
{
    cout << "Please, enter two numbers:\n";
    cout << "first number: ";
    cin >> firNum;

    return firNum;
}

// Get Second Number - Function.
int getSecondNumberFun(int secNum)
{
    cout << "second number: ";
    cin >> secNum;

    return secNum;
}

// Calculate Difference - Function.
int calculateDifferenceFun(int firNum, int secNum, int dif)
{
    firNum = getFirstNumberFun(firNum);
    secNum = getSecondNumberFun(secNum);

    dif = firNum - secNum;

    return dif;
}

// Result - Function.
void resultFun(int firNum, int secNum, int dif)
{
    printWelcomeMessageFun();
    dif = calculateDifferenceFun(firNum, secNum, dif);
    cout << "\nDifference: " << dif;

    cout << "\n"
         << endl;
}
//* End Function ..
