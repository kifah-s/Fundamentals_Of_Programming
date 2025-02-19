
//* Stoi Issue Program (Version 1).

/*
* Write a program that demonstrates the issue with using stoi on a string containing a character, like "a".
* Handle the exception to prevent a program crash.

! Output:
! Error: stoi
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

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Stoi Issue Program (Version 1) ..\n"
         << endl;
}

// Converts String - Function.
void convertsStringFun(string &str, int &num)
{
    try
    {
        num = stoi(str);
        cout << num + 1;
    }
    catch (const invalid_argument &e)
    {
        cout << "Error: " << e.what() << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    string myStr = "a";
    int myNum = 0;

    // Call Functions.
    printWelcomeMessageFun();
    convertsStringFun(myStr, myNum);

    cout << "\n"
         << endl;
}
//* End Function ..
