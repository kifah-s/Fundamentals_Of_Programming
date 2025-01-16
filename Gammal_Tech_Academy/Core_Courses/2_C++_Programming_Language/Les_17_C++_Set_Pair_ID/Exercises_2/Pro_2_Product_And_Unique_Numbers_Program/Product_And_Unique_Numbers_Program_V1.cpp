
//* Product And Unique Numbers Program (Version 1).

/*
* Create a set of pairs to store product names along with their unique identification numbers. Print the sorted pairs.

! Input:
! Please, enter number of products: 3

! Please, enter product name 1: laptop
! Please, enter unique number 1: 123

! Please, enter product name 2: phone
! Please, enter unique number 2: 456

! Please, enter product name 3: watch
! Please, enter unique number 3: 789

! Output:
! Sorted Pairs:
! unique number: 123, product name: laptop
! unique number: 456, product name: phone
! unique number: 789, product name: watch
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
    cout << "\n\nYou welcome in Product And Unique Numbers Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Product - Function
int getNumberOfProductFun(int num)
{
    cout << "Please, enter number of products: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<int, string>> getElemetsFun(set<pair<int, string>> mySet)
{
    int numOf = getNumberOfProductFun(numOf);

    // Temporary Element.
    pair<int, string> temporary;

    for (int i = 0; i < numOf; i++)
    {
        cout << "Please, enter product name " << i + 1 << ": ";
        cin >> temporary.second;

        cout << "Please, enter unique number " << i + 1 << ": ";
        cin >> temporary.first;
     
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
        cout << "unique number:" << p.first << ", product name: " << p.second << endl;
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
