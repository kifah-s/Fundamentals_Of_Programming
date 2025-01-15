
//* Store Coordinates Program (Version 1).

/*
* Write a program and Use pairs to store coordinates (x, y) for a point, taking input from the user.

! Input:
! Please, enter X coordinates: 5
! Please, enter Y coordinates: 7

! Output:
! X coordinates: 5
! Y coordinates: 7
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
    cout << "\n\nYou welcome in Store Coordinates Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
pair<int, int> getElemetsFun(pair<int, int> myPair)
{
    cout << "Please, enter X coordinates: ";
    cin >> myPair.first;

    cout << "Please, enter Y coordinates: ";
    cin >> myPair.second;

    return myPair;
}

// Print Pair Elements - Function.
void printPairElementsFun(pair<int, int> myPair)
{
    cout << "X coordinates: " << myPair.first << endl;
    cout << "Y coordinates: " << myPair.second;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pair.
    pair<int, int> myPair;

    // Call Functions.
    myPair = getElemetsFun(myPair);
    printPairElementsFun(myPair);

    cout << "\n"
         << endl;
}
//* End Function ..
