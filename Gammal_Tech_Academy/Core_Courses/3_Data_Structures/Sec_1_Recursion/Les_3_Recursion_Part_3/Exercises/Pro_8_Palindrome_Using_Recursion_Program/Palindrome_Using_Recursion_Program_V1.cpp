
//* Palindrome Using Recursion Program (Version 1).

/*
* Write a program to check if a given string is a palindrome using recursion.

! Input:
! Please, enter a string: lmml

! Output:
! The string is a Palindrome.
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

// Get String - Function.
void getStringFun(char word[100])
{
    cout << "Please enter a string: ";
    cin.getline(word, 100);
}

// Palindrome - Recursion Function.
bool palindromeRecFun(const char *str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (str[start] != str[end])
    {
        return false;
    }
    return palindromeRecFun(str, start + 1, end - 1);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    char str[100];

    // Call Functions.
    printWelcomeMessageFun();
    getStringFun(str);

    int len = strlen(str);
    if (palindromeRecFun(str, 0, len - 1))
    {
        cout << "The string is a Palindrome." << endl;
    }
    else
    {
        cout << "The string is Not a Palindrome." << endl;
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
