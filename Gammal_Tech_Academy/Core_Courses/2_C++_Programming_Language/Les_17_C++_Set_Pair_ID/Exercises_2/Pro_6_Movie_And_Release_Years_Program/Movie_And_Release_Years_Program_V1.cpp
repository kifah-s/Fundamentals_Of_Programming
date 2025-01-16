
//* Movie And Release Years Program (Version 1).

/*
* Create a set of pairs to store movie titles along with their respective release years. Print the sorted pairs.

! Input:
! Please, enter number of Movies: 3

! Please, enter movie names 1: c
! Please, enter release years 1: 1995

! Please, enter movie names 2: b
! Please, enter release years 2: 2000

! Please, enter movie names 3: a
! Please, enter release years 3: 2010

! Output:
! Sorted Pairs:
! movie names: c, release years: 1995
! movie names: b, release years: 2000
! movie names: a, release years: 2010
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
    cout << "\n\nYou welcome in Movie And Release Years Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Movies - Function
int getNumberOfMoviesFun(int num)
{
    cout << "Please, enter number of Movies: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<float, string>> getElemetsFun(set<pair<float, string>> mySet)
{
    int numOfNam = getNumberOfMoviesFun(numOfNam);

    // Temporary Element.
    pair<float, string> temporary;

    for (int i = 0; i < numOfNam; i++)
    {
        cout << "Please, enter movie names " << i + 1 << ": ";
        cin >> temporary.second;

        cout << "Please, enter release years " << i + 1 << ": ";
        cin >> temporary.first;

        mySet.insert(temporary);
    }

    return mySet;
}

// Print Set Elements - Function.
void printSetElementsFun(set<pair<float, string>> mySet)
{
    cout << "\nSorted Pairs:" << endl;
    for (const auto &p : mySet)
    {
        cout << "movie names: " << p.second << ", release years: " << p.first << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    set<pair<float, string>> mySet;

    // Call Functions.
    mySet = getElemetsFun(mySet);
    printSetElementsFun(mySet);

    cout << "\n"
         << endl;
}
//* End Function ..
