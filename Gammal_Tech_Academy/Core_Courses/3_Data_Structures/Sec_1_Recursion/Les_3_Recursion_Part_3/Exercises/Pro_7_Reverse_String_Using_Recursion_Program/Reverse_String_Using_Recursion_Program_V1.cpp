
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
string getStringFun()
{
    string word;
    cout << "Please enter a string: ";
    cin >> word;

    return word;
}

// Print Reverse String - Function.
// void printReverseStringFun(string myStr)
// {
//     cout << "Reversed string: ";
//     for (int i = myStr.length(); i >= 0; i--)
//     {
//         cout << myStr[i];
//     }
// }

// Reverse String 1 - Function.
// string reverseString1Fun(string myStr)
// {
//     string revStr = "";
//     for (int i = myStr.length() - 1; i >= 0; i--)
//     {
//         // revStr = revStr + myStr[i];
//         revStr += myStr[i];
//     }
//     return revStr;
// }

// Reverse String 2 - Function.
// string reverseString2Fun(string myStr)
// {
//     reverse(myStr.begin(), myStr.end());
//     return myStr;
// }

// Print String - Function.
// void printStringFun(string revStr)
// {
//     cout << "Reversed string: " << revStr << endl;
// }

// Result - Function.
void resultFun()
{
    // Declare Variables.
    string myString = "";
    string reverseString = "";

    // Call Functions.
    printWelcomeMessageFun();
    myString = getStringFun();

    // printReverseStringFun(myString);
    // reverseString = reverseString1Fun(myString);
    // printStringFun(reverseString);
    // reverseString = reverseString2Fun(myString);
    // printStringFun(reverseString);

    

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
