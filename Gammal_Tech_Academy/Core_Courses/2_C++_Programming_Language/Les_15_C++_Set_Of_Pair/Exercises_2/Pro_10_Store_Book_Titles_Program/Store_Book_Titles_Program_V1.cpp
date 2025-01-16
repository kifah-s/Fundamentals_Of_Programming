
//* Store Book Titles Program (Version 1).

/*
* Create a set of pairs to store book titles and their respective publication years. Print the sorted pairs.

! Input:
! Please, enter number of books: 3

! Please, enter book name 1: a
! Please, enter publication years 1: 2002

! Please, enter book name 2: b
! Please, enter publication years 2: 2008

! Please, enter book name 3: c
! Please, enter publication years 3: 1994

! Output:
! Sorted Pairs:
! book name: a, publication years: 1
! book name: b, publication years: 2008
! book name: c, publication years: 1994
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
    cout << "\n\nYou welcome in Store Book Titles Program (Version 1) ..\n"
         << endl;
}

// Get Number Of books - Function
int getNumberOfBooksFun(int num)
{
    cout << "Please, enter number of books: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, int>> getElemetsFun(set<pair<string, int>> mySet)
{
    int numOfNam = getNumberOfBooksFun(numOfNam);

    // Temporary Element.
    pair<string, int> temporary;

    for (int i = 0; i < numOfNam; i++)
    {
        cout << "Please, enter book name " << i + 1 << ": ";
        cin >> temporary.first;

        cout << "Please, enter publication years " << i + 1 << ": ";
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
        cout << "programming languages: " << p.first << ", publication years " << p.second << endl;
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
