
//* First And Last Names 2 Program (Version 1).

/*
* Create a program that prompts the user for their first and last names separately,
* and prints a greeting with the third letter of the first name,
* and the second letter of the last name capitalized.

! Input:
! What is your first name? kifah
! What is your last name? saloum

! Output:
! Hello kiFah SAloum
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
    cout << "\n\nYou welcome in First And Last Names 2 Program (Version 1) ..\n"
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
    fName[2] = toupper(fName[2]);
    lName[1] = toupper(lName[1]);
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
