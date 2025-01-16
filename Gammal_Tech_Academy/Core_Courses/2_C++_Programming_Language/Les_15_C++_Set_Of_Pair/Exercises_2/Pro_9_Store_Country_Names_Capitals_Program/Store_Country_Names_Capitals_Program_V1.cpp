
//* Store Country Names Capitals Program (Version 1).

/*
* Create a set of pairs to store country names and their respective capitals. Print the sorted pairs.

! Input:
! Please, enter number of country: 3

! Please, enter country names 1: japan
! Please, enter capitals 1: tokyo

! Please, enter country names 2: germany
! Please, enter capitals 2: berlin

! Please, enter country names 3: france
! Please, enter capitals 3: paris

! Output:
! Sorted Pairs:
! country names: japan, capitals: tokyo
! country names: germany, capitals: berlin
! country names: france, capitals: paris
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
    cout << "\n\nYou welcome in Store Country Names Capitals Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Countrys - Function
int getNumberOfCountrysFun(int num)
{
    cout << "Please, enter number of Countrys: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, string>> getElemetsFun(set<pair<string, string>> mySet)
{
    int numOfNam = getNumberOfCountrysFun(numOfNam);

    // Temporary Element.
    pair<string, string> temporary;

    for (int i = 0; i < numOfNam; i++)
    {
        cout << "Please, enter country names " << i + 1 << ": ";
        cin >> temporary.first;

        cout << "Please, enter capitals " << i + 1 << ": ";
        cin >> temporary.second;

        mySet.insert(temporary);
    }

    return mySet;
}

// Print Set Elements - Function.
void printSetElementsFun(set<pair<string, string>> mySet)
{
    cout << "\nSorted Pairs:" << endl;
    for (const auto &p : mySet)
    {
        cout << "country names: " << p.first << ", capitals: " << p.second << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    set<pair<string, string>> mySet;

    // Call Functions.
    mySet = getElemetsFun(mySet);
    printSetElementsFun(mySet);

    cout << "\n"
         << endl;
}
//* End Function ..
