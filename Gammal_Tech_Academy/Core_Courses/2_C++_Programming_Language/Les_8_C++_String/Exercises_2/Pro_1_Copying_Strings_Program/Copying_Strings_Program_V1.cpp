

//* Copying Strings Program (Version 1).

/*
* Write a program that takes a string as input and Copying Strings in another.


! Input:
! Please, enter a string: kifah

! Output:
! Copying Strings: kifah
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <set>

using namespace std;

void resultFun(string myStr, string copStr);

int main()
{
    // Declare Variables.
    string myString, copyingString;

    // Call Functions.
    resultFun(myString, copyingString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Copying Strings Program (Version 1) ..\n"
         << endl;
}

// Get String - Function.
string getStringFun(string myStr)
{
    cout << "Please, enter a string: ";
    cin >> myStr;

    return myStr;
}

// Copying String - Function.
string copyingStringFun(string myStr, string copStr)
{
    copStr = myStr;

    return copStr;
}

// Result - Function.
void resultFun(string myStr, string copStr)
{
    printWelcomeMessageFun();
    myStr = getStringFun(myStr);
    copStr = copyingStringFun(myStr, copStr);

    cout << "\nCopying Strings: " << copStr;

    cout << "\n\n"
         << endl;
}
//* End Function ..
