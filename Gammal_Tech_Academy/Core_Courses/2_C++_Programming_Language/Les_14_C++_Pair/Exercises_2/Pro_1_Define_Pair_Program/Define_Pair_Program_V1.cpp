
//* Define Pair Program (Version 1).

/*
* Write a program and define a pair and print its elements.

! Output:
! kifah
! 123456789
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>

using namespace std;

void resultFun(pair<string, int> myPair);

int main()
{
    // Declare Variables.
    // pair<string, int> myPair = {"kifah", 123456789};
    pair<string, int> myPair;
    // myPair.first = "kifah";
    // myPair.second = 123456789;

    // Call Functions.
    resultFun(myPair);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Define Pair Program (Version 1) ..\n"
         << endl;
}

// Add Elemets - Function.
pair<string, int> addElemetsFun(pair<string, int> myPair)
{
    myPair.first = "kifah";
    myPair.second = 123456789;

    return myPair;
}

// Print Pair Elements - Function.
void printPairElementsFun(pair<string, int> myPair)
{
    myPair = addElemetsFun(myPair);
    
    cout << myPair.first << endl;
    cout << myPair.second;
}

// Result - Function.
void resultFun(pair<string, int> myPair)
{
    printWelcomeMessageFun();
    printPairElementsFun(myPair);

    cout << "\n"
         << endl;
}
//* End Function ..
