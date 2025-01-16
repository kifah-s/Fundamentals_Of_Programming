
//* Store Car Models Program (Version 1).

/*
* Create a set of pairs to store car models and their fuel efficiency. Print the sorted pairs.

! Input:
! Please, enter number of cars: 3

! Please, enter car names 1: honda
! Please, enter fuel efficiency 1: 12.5

! Please, enter car names 2: bmw
! Please, enter fuel efficiency 2: 150

! Please, enter car names 3: mazda
! Please, enter fuel efficiency 3: 60.3

! Output:
! Sorted Pairs:
! car names: honda, fuel efficiency: 12.5
! car names: bmw, fuel efficiency: 150
! car names: mazda, fuel efficiency: 60.3
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
    cout << "\n\nYou welcome in Store Car Models Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Cars - Function
int getNumberOfCarsFun(int num)
{
    cout << "Please, enter number of Cars: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, float>> getElemetsFun(set<pair<string, float>> mySet)
{
    int numOfNam = getNumberOfCarsFun(numOfNam);

    // Temporary Element.
    pair<string, float> temporary;

    for (int i = 0; i < numOfNam; i++)
    {
        cout << "Please, enter car names " << i + 1 << ": ";
        cin >> temporary.first;

        cout << "Please, enter fuel efficiency " << i + 1 << ": ";
        cin >> temporary.second;

        mySet.insert(temporary);
    }

    return mySet;
}

// Print Set Elements - Function.
void printSetElementsFun(set<pair<string, float>> mySet)
{
    cout << "\nSorted Pairs:" << endl;
    for (const auto &p : mySet)
    {
        cout << "car names: " << p.first << ", fuel efficiency: " << p.second << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    set<pair<string, float>> mySet;

    // Call Functions.
    mySet = getElemetsFun(mySet);
    printSetElementsFun(mySet);

    cout << "\n"
         << endl;
}
//* End Function ..
