
//* Character Of String Using Recursion Program (Version 1).

/*
* Write a program to print each character of a string using recursion.

! Input:
! Please, enter a string: Hello World

! Output:
! Character in a string: H e l l o  W o r l d
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
    cout << "\n\nYou welcome in Character Of String Using Recursion Program (Version 1) ..\n"
         << endl;
}

// Get String - Function.
void getStringFun(char str[])
{
    cout << "Please, enter a string: ";
    cin.getline(str, 100);
}

// Character Of String - Recursion Function.
void characterOfStringRecFun(const char* str)
{
    if (*str != '\0')
    {
        cout << *str << " ";
        characterOfStringRecFun(str + 1);
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

    cout << "Character in the string: ";
    characterOfStringRecFun(myString);

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
