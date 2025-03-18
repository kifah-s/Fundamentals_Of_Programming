
//* Palindrome Using Recursion Program (Version 1).

/*
* Write a program to check if a given positive integer is a palindrome using recursion.

! Input:
! Please, enter a positive number: 1221

! Output:
! 1221 is a Palindrome number.
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Palindrome Using Recursion Program (Version 1) ..\n"
         << endl;
}

// Get number - Function.
int getNumberFun()
{
    int num = 0;

    cout << "Please enter a positive number: ";
    cin >> num;

    return num;
}

// Palindrome - Recursion Function.
bool palindromeRecFun(int num, int &temp)
{
    if (num == 0)
    {
        return true;
    }
    if (palindromeRecFun(num / 10, temp) && (num % 10 == temp % 10))
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
    int number = 0;

    // Call Functions.
    printWelcomeMessageFun();
    number = getNumberFun();

    // Declare Variables.
    int temp = number;

    // Call Functions.
    if (palindromeRecFun(number, temp))
    {
        cout << number << " is a Palindrome number." << endl;
    }
    else
    {
        cout << number << " is not a Palindrome number." << endl;
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
