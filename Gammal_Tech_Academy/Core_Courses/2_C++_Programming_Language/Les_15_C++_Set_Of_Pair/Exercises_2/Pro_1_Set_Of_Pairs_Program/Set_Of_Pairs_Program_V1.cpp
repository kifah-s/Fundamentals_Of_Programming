
//* Set Of Pairs Program (Version 1).

/*
* Create a set of pairs to store names and phone numbers. Print the sorted pairs.

! Input:
! Please, enter number of name: 3

! Please, enter name 1: Bob
! Please, enter number 1: 1

! Please, enter name 2: Omar
! Please, enter number 2: 2

! Please, enter name 3: Charlie
! Please, enter number 3: 3

! Output:
! Sorted Pairs:
! Bob 1
! Omar 2
! Charlie 3
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
    cout << "\n\nYou welcome in Set Of Pairs Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Name - Function
int getNumberOfNameFun(int num)
{
    cout << "Please, enter number of name: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, int>> getElemetsFun(set<pair<string, int>> mySet)
{
    int numOfNam = getNumberOfNameFun(numOfNam);

    // Temporary Element.
    pair<string, int> temporary;

    for (int i = 0; i < numOfNam; i++)
    {
        cout << "Please, enter name " << i + 1 << ": ";
        cin >> temporary.first;

        cout << "Please, enter number " << i + 1 << ": ";
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
        cout << "Name: " << p.first << ", Number: " << p.second << endl;
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
