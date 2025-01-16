
//* City And Postal Code Program (Version 1).

/*
* Create a set of pairs to store city names along with their corresponding postal codes. Print the sorted pairs.

! Input:
! Please, enter number of city: 3

! Please, enter postal code 1: 123
! Please, enter city name 1: london

! Please, enter postal code 2: 456
! Please, enter city name 2: paris

! Please, enter postal code 3: 789
! Please, enter city name 3: newYork

! Output:
! Sorted Pairs:
! postal code: 123, city name: london
! postal code: 456, city name: paris
! postal code: 789, city name: newYork
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
    cout << "\n\nYou welcome in City And Postal Code Program (Version 1) ..\n"
         << endl;
}

// Get Number Of city - Function
int getNumberOfCityFun(int num)
{
    cout << "Please, enter number of city: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<int, string>> getElemetsFun(set<pair<int, string>> mySet)
{
    int numOf = getNumberOfCityFun(numOf);

    // Temporary Element.
    pair<int, string> temporary;

    for (int i = 0; i < numOf; i++)
    {
        cout << "Please, enter postal code " << i + 1 << ": ";
        cin >> temporary.first;

        cout << "Please, enter city name " << i + 1 << ": ";
        cin >> temporary.second;

        mySet.insert(temporary);
    }

    return mySet;
}

// Print Set Elements - Function.
void printSetElementsFun(set<pair<int, string>> mySet)
{
    cout << "\nSorted Pairs:" << endl;
    for (const auto &p : mySet)
    {
        cout << "postal code:" << p.first << ", city name: " << p.second << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    set<pair<int, string>> mySet;

    // Call Functions.
    mySet = getElemetsFun(mySet);
    printSetElementsFun(mySet);

    cout << "\n"
         << endl;
}
//* End Function ..
