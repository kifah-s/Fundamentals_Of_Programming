
//* Fruit And Colors Program (Version 1).

/*
* Create a set of pairs to store fruit names along with their respective colors. Print the sorted pairs.

! Input:
! Please, enter number of fruits: 3

! Please, enter fruit names 1: apple
! Please, enter fruit color 1: red

! Please, enter fruit names 2: banana
! Please, enter fruit color 2: yellow

! Please, enter fruit names 3: grape
! Please, enter fruit color 3: purple

! Output:
! Sorted Pairs:
! fruit names: apple, fruit color: red
! fruit names: banana, fruit color: yellow
! fruit names: grape, fruit color: purple
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
    cout << "\n\nYou welcome in Fruit And Colors Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Fruits - Function
int getNumberOfFruitsFun(int num)
{
    cout << "Please, enter number of fruits: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, string>> getElemetsFun(set<pair<string, string>> mySet)
{
    int numOf = getNumberOfFruitsFun(numOf);

    for (int i = 0; i < numOf; i++)
    {
        // Temporary Element.
        pair<string, string> temporary;
        
        cout << "Please, enter fruit names " << i + 1 << ": ";
        cin >> temporary.first;

        cout << "Please, enter fruit color " << i + 1 << ": ";
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
        cout << "fruit names: " << p.first << ", fruit color: " << p.second << endl;
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
