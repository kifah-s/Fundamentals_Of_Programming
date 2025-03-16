
//* Reverse String Using Recursion Program (Version 1).

/*
* Write a program to reverse a string using recursion.

! Input:
! Please, enter a string: hello

! Output:
! Reversed string: olleh
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
    cout << "\n\nYou welcome in Reverse String Using Recursion Program (Version 1) ..\n"
         << endl;
}

// Get String - Function.
void getStringFun(char word[100])
{
    cout << "Please enter a string: ";
    cin.getline(word, 100);
}

// Reverse String - Recursion Function.
void reverseStringRecFun(char myStr[], int start, int end)
{
    if (start < end) // Base Case.
    {
        swap(myStr[start], myStr[end]);
        reverseStringRecFun(myStr, start + 1, end - 1); // Recursive Call.
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    char myString[100];

    // Call Functions.
    printWelcomeMessageFun();
    getStringFun(myString);
    reverseStringRecFun(myString, 0, strlen(myString) - 1);

    cout << "Reversed string: " << myString << endl;

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
