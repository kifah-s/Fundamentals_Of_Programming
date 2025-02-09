
//* Map of Strings and Integers Program (Version 1).

/*
* Create a program that uses a range-based for loop to iterate through a map of strings and integers and print their values.

! Output:
! gammal 100
! tech 50
! www 200
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
#include <fstream>

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
    cout << "\n\nYou welcome in Map of Strings and Integers Program (Version 1) ..\n"
         << endl;
}

// Print Elements - Fuction.
void printElementsFuc(map<string, int> myMap)
{
    for (auto i : myMap)
    {
        cout << i.first << ", " << i.second << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    map<string, int> myMap = {{"www", 200}, {"gammal", 100}, {"tech", 50}};
    // Call Functions.
    printWelcomeMessageFun();
    printElementsFuc(myMap);

    cout << "\n"
         << endl;
}
//* End Function ..
