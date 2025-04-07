
//* Palindrome Using Recursion Program (Version 1).

/*
* Write a program to check if a given positive integer is a palindrome using recursion.

! Output:
! Please, enter a positive number: 1221

! Output:
! 1221 is a positive number.
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
#include <fstream>
#include <stdlib.h>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Palindrome Using Recursion Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int myNum = 0;

    cout << "Please, enter a number: ";
    cin >> myNum;

    return myNum;
}

// Is Palindrome - Function.
int isPalindromeFun(int myNum, int &temp)
{
    if (myNum == 0)
    {
        return true;
    }

    if (isPalindromeFun(myNum / 10, temp) && (myNum % 10 == temp % 10))
    {
        temp /= 10;
        return true;
    }

    return false;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();
    int temp = myNumber;
    if (isPalindromeFun(myNumber, temp))
    {
        cout << myNumber << " is a palindrome number." << endl;
    }
    else
    {
        cout << myNumber << " is not a palindrome number." << endl;
    }

    cout << endl
         << endl;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
