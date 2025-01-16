
//* Animal And Average Lifespan Program (Version 1).

/*
* Create a set of pairs to store animal names and their average lifespan. Print the sorted pairs.

! Input:
! Please, enter number of animal: 3

! Please, enter animal names 1: lion
! Please, enter average lifespan 1: 12.5

! Please, enter animal names 2: turtle
! Please, enter average lifespan 2: 150

! Please, enter animal names 3: elephants
! Please, enter average lifespan 3: 60.3

! Output:
! Sorted Pairs:
! animal names: lion, average lifespan: 12.5
! animal names: turtle, average lifespan: 150
! animal names: elephants, average lifespan: 60.3
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
    cout << "\n\nYou welcome in Animal And Average Lifespan Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Animals - Function
int getNumberOfAnimalsFun(int num)
{
    cout << "Please, enter number of animals: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<float, string>> getElemetsFun(set<pair<float, string>> mySet)
{
    int numOfNam = getNumberOfAnimalsFun(numOfNam);

    // Temporary Element.
    pair<float, string> temporary;

    for (int i = 0; i < numOfNam; i++)
    {
        cout << "Please, enter animal names " << i + 1 << ": ";
        cin >> temporary.second;

        cout << "Please, enter average lifespan " << i + 1 << ": ";
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
        cout << "animal names: " << p.second << ", average lifespan: " << p.first << endl;
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
