

//* Clearing Strings Program (Version 1).

/*
* Write a program that takes a string as input and Clearing String.


! Input:
! Please, enter a string: kifah

! Output:
! Cleared Strings.
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <set>

using namespace std;

void resultFun(string myStr);

int main()
{
    // Declare Variables.
    string myString;

    // Call Functions.
    resultFun(myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Clearing Strings Program (Version 1) ..\n"
         << endl;
}

// Get String - Function.
string getStringFun(string myStr)
{
    cout << "Please, enter a string: ";
    cin >> myStr;

    return myStr;
}

// Cleared String - Function.
string clearedStringFun(string myStr)
{
    myStr.clear();

    return myStr;
}

// Result - Function.
void resultFun(string myStr)
{
    printWelcomeMessageFun();
    myStr = getStringFun(myStr);
    myStr = clearedStringFun(myStr);

    cout << "\nCleared Strings." << myStr;

    cout << "\n\n"
         << endl;
}
//* End Function ..
