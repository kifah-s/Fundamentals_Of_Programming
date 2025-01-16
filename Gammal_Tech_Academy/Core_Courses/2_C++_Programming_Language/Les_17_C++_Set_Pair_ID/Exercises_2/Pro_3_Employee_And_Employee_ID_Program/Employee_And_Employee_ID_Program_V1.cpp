
//* Employee And Employee ID Program (Version 1).

/*
* Create a set of pairs to store employee names along with their employee IDs. Print the sorted pairs.

! Input:
! Please, enter number of employees: 3

! Please, enter employees name 1: hala
! Please, enter employee ID 1: 789

! Please, enter employees name 2: kifah
! Please, enter employee ID 2: 123

! Please, enter employees name 3: saloum
! Please, enter employee ID 3: 456


! Output:
! Sorted Pairs:
! employee ID: 123, employees name: kifah
! employee ID: 456, employees name: saloum
! employee ID: 789, employees name: hala
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
    cout << "\n\nYou welcome in Employee And Employee ID Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Employees - Function
int getNumberOfEmployeesFun(int num)
{
    cout << "Please, enter number of employees: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<int, string>> getElemetsFun(set<pair<int, string>> mySet)
{
    int numOf = getNumberOfEmployeesFun(numOf);

    for (int i = 0; i < numOf; i++)
    {
        // Temporary Element.
        pair<int, string> temporary;

        cout << "Please, enter employees name " << i + 1 << ": ";
        cin >> temporary.second;

        cout << "Please, enter employee ID " << i + 1 << ": ";
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
        cout << "employee ID:" << p.first << ", employee name: " << p.second << endl;
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
