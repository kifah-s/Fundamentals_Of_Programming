
//* Store City And Temperatures Program (Version 1).

/*
* Create a set of pairs to store city names and their respective temperatures. Print the sorted pairs.

! Input:
! Please, enter number of city: 3

! Please, enter city 1: paris
! Please, enter temperatures 1: 18.5

! Please, enter city 2: sydney
! Please, enter temperatures 2: 29.8

! Please, enter city 3: tokyo
! Please, enter temperatures 3: 26.3

! Output:
! Sorted Pairs:
! city: paris, temperatures: 18.5
! city: sydney, temperatures: 29.8
! city: tokyo, temperatures: 26.3
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
    cout << "\n\nYou welcome in Store City And Temperatures Program (Version 1) ..\n"
         << endl;
}

// Get Number Of City - Function
int getNumberOfCityFun(int num)
{
    cout << "Please, enter number of city: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, float>> getElemetsFun(set<pair<string, float>> mySet)
{
    int numOfNam = getNumberOfCityFun(numOfNam);

    // Temporary Element.
    pair<string, float> temporary;

    for (int i = 0; i < numOfNam; i++)
    {
        cout << "Please, enter city " << i + 1 << ": ";
        cin >> temporary.first;

        cout << "Please, enter temperatures " << i + 1 << ": ";
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
        cout << "city: " << p.first << ", temperatures: " << p.second << endl;
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
