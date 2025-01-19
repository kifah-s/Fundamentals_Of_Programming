
//* First And Last Names Program (Version 1).

/*
* Create a program that prompts the user for their first and last names separately,
* and prints a greeting with the first letters of both names capitalized.

! Input:
! What is your first name? kifah
! What is your last name? saloum

! Output:
! Hello Kifah Saloum
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
    cout << "\n\nYou welcome in First And Last Names Program (Version 1) ..\n"
         << endl;
}

// Get First Name - Function.
string getFirstNameFun(string fName)
{
    cout << "What is your first name? ";
    cin >> fName;

    return fName;
}

// Get Last Name - Function.
string getLastNameFun(string lName)
{
    cout << "What is your last name? ";
    cin >> lName;

    return lName;
}

// Update First And Last Name - Function.
void updateFirstAndLastFun(string &fName, string &lName)
{
    fName[0] = toupper(fName[0]);
    lName[0] = toupper(lName[0]);
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string firstName, lastName;

    // Call Functions.
    firstName = getFirstNameFun(firstName);
    lastName = getLastNameFun(lastName);
    updateFirstAndLastFun(firstName, lastName);

    cout << "\nHello " << firstName << " " << lastName;

    cout << "\n"
         << endl;
}
//* End Function ..
