
//* Hometown 3 Program (Version 1).

/*
* Create a program that asks the user for their hometown and prints a greeting with the second letter capitalized,
* using the first letter provided.

! Input:
! What is the first letter of your hometown? p
! Where is your hometown? paris

! Output:
! Greeting from pParis
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
    cout << "\n\nYou welcome in Hometown 3 Program (Version 1) ..\n"
         << endl;
}

// Get First Letter - Function.
char getFirstLetterFun(char firLet)
{
    cout << "What is the first letter of your hometown? ";
    cin >> firLet;

    return firLet;
}

// Get Hometown - Function.
string getHometownFun(string homeT)
{
    cout << "Where is your hometown? ";
    cin >> homeT;

    return homeT;
}

// Update Hometown - Function.
string updateHometownFun(string homeT)
{
    homeT[0] = toupper(homeT[0]);

    return homeT;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    char firstLetter;
    string hometown;

    // Call Functions.
    firstLetter = getFirstLetterFun(firstLetter);
    hometown = getHometownFun(hometown);
    hometown = updateHometownFun(hometown);

    cout << "\nGreeting from " << firstLetter << hometown;

    cout << "\n"
         << endl;
}
//* End Function ..