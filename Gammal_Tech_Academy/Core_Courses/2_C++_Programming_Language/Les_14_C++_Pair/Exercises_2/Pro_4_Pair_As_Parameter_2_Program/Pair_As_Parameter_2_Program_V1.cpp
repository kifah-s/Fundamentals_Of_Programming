
//* Pair As Parameter 2 Program (Version 1).

/*
* Create a function that takes a pair as a parameter and prints its elements.

! Input:
! Please, enter a string: kifah
! Please, enter a integer: 987

! Output:
! First Element: kifah
! Second Element: 987
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>

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
    cout << "\n\nYou welcome in Pair As Parameter 2 Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
pair<string, int> getElemetsFun(pair<string, int> myPair)
{
    cout << "Please, enter a string: ";
    cin >> myPair.first;

    cout << "Please, enter a integer: ";
    cin >> myPair.second;

    return myPair;
}

// Print Pair Elements - Function.
void printPairElementsFun(pair<string, int> myPair)
{
    myPair = getElemetsFun(myPair);

    cout << "First Element: " << myPair.first << endl;
    cout << "Second Element: " << myPair.second;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pair.
    pair<string, int> myPair;

    // Call Functions.
    printPairElementsFun(myPair);

    cout << "\n"
         << endl;
}
//* End Function ..