
//* Last Name 2 Program (Version 1).

/*
* Create a program that asks the user for their last name and prints a greeting with the third letter capitalized.

! Input:
! What is your last name? saloum

! Output:
! Hello Mr saLoum
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
    cout << "\n\nYou welcome in Last Name 2 Program (Version 1) ..\n"
         << endl;
}

// Get Last Name - Function.
string getLastNameFun(string laName)
{
    cout << "What is your last name? ";
    cin >> laName;

    return laName;
}

// Update Last Name - Function.
string updateLastNameFun(string laName)
{
    laName[2] = toupper(laName[2]);

    return laName;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string lastName;

    // Call Functions.
    lastName = getLastNameFun(lastName);
    lastName = updateLastNameFun(lastName);

    cout << "\nHello, Mr. " << lastName;

    cout << "\n"
         << endl;
}
//* End Function ..
