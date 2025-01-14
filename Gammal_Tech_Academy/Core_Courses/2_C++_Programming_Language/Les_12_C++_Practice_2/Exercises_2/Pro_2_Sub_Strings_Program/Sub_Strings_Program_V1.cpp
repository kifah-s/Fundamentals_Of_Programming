
//* Sub Strings Program (Version 1).

/*
* Write a program that uses the substr function to print substrings of a given string.


! Output:
! hmed
! med
! ed
! d
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(string name);

int main()
{
    // Declare Variables.
    string name = "ahmed";

    // Call Functions.
    resultFun(name);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sub Strings Program (Version 1) ..\n"
         << endl;
}

// Sub And Print Name - Function.
void subAndPrintNameFun(string name)
{
    // cout << name.substr(0) << endl;
    // cout << name.substr(1) << endl;
    // cout << name.substr(2) << endl;
    // cout << name.substr(3) << endl;
    // cout << name.substr(4) << endl;

    for (int i = 0; i < name.size(); i++)
    {
        cout << name.substr(i) << endl;
    }
}

// Result - Function.
void resultFun(string name)
{
    printWelcomeMessageFun();
    subAndPrintNameFun(name);

    cout << "\n"
         << endl;
}
//* End Function ..
