
//* Store Country Names Program (Version 1).

/*
* Create a set of pairs to store country names and their populations. Print the sorted pairs.

! Input:
! Please, enter number of countrys: 3

! Please, enter countrys 1: china
! Please, enter populations 1: 123456

! Please, enter countrys 2: india
! Please, enter populations 2: 222222

! Please, enter countrys 3: brazil
! Please, enter populations 3: 304582

! Output:
! Sorted Pairs:
! countrys: china, populations: 123456
! countrys: india, populations: 222222
! countrys: brazil, populations: 304582
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
    cout << "\n\nYou welcome in Store Country Names Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Countrys - Function
int getNumberOfCountrysFun(int num)
{
    cout << "Please, enter number of countrys: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, int>> getElemetsFun(set<pair<string, int>> mySet)
{
    int numOfNam = getNumberOfCountrysFun(numOfNam);

    // Temporary Element.
    pair<string, int> temporary;

    for (int i = 0; i < numOfNam; i++)
    {
        cout << "Please, enter countrys " << i + 1 << ": ";
        cin >> temporary.first;

        cout << "Please, enter populations " << i + 1 << ": ";
        cin >> temporary.second;

        mySet.insert(temporary);
    }

    return mySet;
}

// Print Set Elements - Function.
void printSetElementsFun(set<pair<string, int>> mySet)
{
    cout << "\nSorted Pairs:" << endl;
    for (const auto &p : mySet)
    {
        cout << "countrys: " << p.first << ", populations: " << p.second << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    set<pair<string, int>> mySet;

    // Call Functions.
    mySet = getElemetsFun(mySet);
    printSetElementsFun(mySet);

    cout << "\n"
         << endl;
}
//* End Function ..
