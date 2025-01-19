
//* Last Name Program (Version 1).

/*
* Create a program that asks the user for their last name and prints a greeting with the capitalized last name.

! Input:
! What is your last name? saloum

! Output:
! Hello Mr Saloum
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
    cout << "\n\nYou welcome in Last Name Program (Version 1) ..\n"
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
    laName[0] = toupper(laName[0]);
    // for (int i = 1; i < laName.size(); i++)
    // {
    //     laName[i] = tolower(laName[i]);
    // }

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
