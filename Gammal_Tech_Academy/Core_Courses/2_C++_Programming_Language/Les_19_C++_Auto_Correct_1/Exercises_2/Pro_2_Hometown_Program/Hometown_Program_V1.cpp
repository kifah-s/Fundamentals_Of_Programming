
//* Hometown Program (Version 1).

/*
* Write a program that prompts the user for their hometown and then outputs a message with the capitalized hometown.

! Input:
! Where is your hometown? paris

! Output:
! Greeting from Paris
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
    cout << "\n\nYou welcome in Hometown Program (Version 1) ..\n"
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
    homeT[0] = toupper(homeT[0]);
    // for (int i = 1; i < homeT.size(); i++)
    // {
    //     homeT[i] = tolower(homeT[i]);
    // }

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
