
//* Pair As Parameter Program (Version 1).

/*
* Create a function that takes a pair as a parameter and prints its elements.

! Output:
! Name: kifah saloum
! Number: 123456
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
    cout << "\n\nYou welcome in Pair As Parameter Program (Version 1) ..\n"
         << endl;
}

// Print Pair Elements - Function.
void printPairElementsFun(pair<string, int> myPair)
{
    cout << "Name: " << myPair.first << endl;
    cout << "Number: " << myPair.second;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pair.
    pair<string, int> myPair = {"kifah saloum", 123};

    // Call Functions.
    printPairElementsFun(myPair);

    cout << "\n"
         << endl;
}
//* End Function ..
