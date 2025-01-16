
//* Store Names And Ages Program (Version 1).

/*
* Create a set of pairs to store names and their corresponding ages, Print the sorted pairs.

! Input:
! Please, enter number of name: 3

! Please, enter name 1: Bob
! Please, enter age 1: 25

! Please, enter name 2: Omar
! Please, enter age 2: 22

! Please, enter name 3: Charlie
! Please, enter age 3: 30

! Output:
! Sorted Pairs:
! Name: Bob, Age: 25
! Name: Omar, Age: 22
! Name: Charlie, Age: 30
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
    cout << "\n\nYou welcome in Store Names And Ages Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Names - Function
int getNumberOfNamesFun(int num)
{
    cout << "Please, enter number of names: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, int>> getElemetsFun(set<pair<string, int>> mySet)
{
    int numOfNam = getNumberOfNamesFun(numOfNam);

    // Temporary Element.
    pair<string, int> temporary;

    for (int i = 0; i < numOfNam; i++)
    {
        cout << "Please, enter name " << i + 1 << ": ";
        cin >> temporary.first;

        cout << "Please, enter age " << i + 1 << ": ";
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
        cout << "Name: " << p.first << ", Age: " << p.second << endl;
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
