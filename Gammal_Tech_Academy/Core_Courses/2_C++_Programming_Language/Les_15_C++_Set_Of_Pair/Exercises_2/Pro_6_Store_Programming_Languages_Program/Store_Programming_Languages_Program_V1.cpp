
//* Store Programming Languages Program (Version 1).

/*
* Create a set of pairs to store programming languages and their popularity ranks. Print the sorted pairs.

! Input:
! Please, enter number of programming languages: 3

! Please, enter programming languages 1: c++
! Please, enter popularity ranks 1: 1

! Please, enter programming languages 2: java
! Please, enter popularity ranks 2: 2

! Please, enter programming languages 3: c#
! Please, enter popularity ranks 3: 2

! Output:
! Sorted Pairs:
! programming languages: c++, popularity ranks: 1
! programming languages: java, popularity ranks: 2
! programming languages: c#, popularity ranks: 2
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
    cout << "\n\nYou welcome in Store Programming Languages Program (Version 1) ..\n"
         << endl;
}

// Get Number Of programming Languages - Function
int getNumberOfProgrammingLanguagesFun(int num)
{
    cout << "Please, enter number of programming languages: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, int>> getElemetsFun(set<pair<string, int>> mySet)
{
    int numOfNam = getNumberOfProgrammingLanguagesFun(numOfNam);

    // Temporary Element.
    pair<string, int> temporary;

    for (int i = 0; i < numOfNam; i++)
    {
        cout << "Please, enter programming languages " << i + 1 << ": ";
        cin >> temporary.first;

        cout << "Please, enter popularity ranks " << i + 1 << ": ";
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
        cout << "programming languages: " << p.first << ", popularity ranks: " << p.second << endl;
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
