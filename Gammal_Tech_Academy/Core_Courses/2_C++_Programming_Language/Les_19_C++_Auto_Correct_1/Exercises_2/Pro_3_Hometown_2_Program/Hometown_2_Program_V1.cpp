
//* Hometown 2 Program (Version 1).

/*
* Create a program that prompts the user for their hometown and prints a greeting with the second letter capitalized.

! Input:
! Where is your hometown? paris

! Output:
! Greeting from pAris
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
    cout << "\n\nYou welcome in Hometown 2 Program (Version 1) ..\n"
         << endl;
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
    homeT[1] = toupper(homeT[1]);

    return homeT;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string hometown;

    // Call Functions.
    hometown = getHometownFun(hometown);
    hometown = updateHometownFun(hometown);

    cout << "\nGreeting from " << hometown;

    cout << "\n"
         << endl;
}
//* End Function ..
