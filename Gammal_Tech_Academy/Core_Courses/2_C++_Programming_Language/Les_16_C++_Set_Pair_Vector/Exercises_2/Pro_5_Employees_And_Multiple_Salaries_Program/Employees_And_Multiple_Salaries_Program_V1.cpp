
//* Employees And Multiple Salaries Program (Version 1).

/*
* Create a set of pairs to store employee names along with their respective salaries. Print the sorted pairs.

! Input:
! Please, enter number of Employees: 2

! Please, enter employee name: ali
! Please, enter employee salaries Or ( 0 to finish ): 95
! Please, enter employee salaries Or ( 0 to finish ): 80
! Please, enter employee salaries Or ( 0 to finish ): 0

! Please, enter employee name: nor
! Please, enter employee salaries Or ( 0 to finish ): 60
! Please, enter employee salaries Or ( 0 to finish ): 75
! Please, enter employee salaries Or ( 0 to finish ): 0


! Output:
! Sorted Pairs:
! employee name: ali
! employee salaries: 95
! employee salaries: 80

! employee name: nor
! employee salaries: 60
! employee salaries: 75
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
    cout << "\n\nYou welcome in Employees And Multiple Salaries Program (Version 1) ..\n"
         << endl;
}

// Get Number Of names - Function
int getNumberOfNamesFun(int num)
{
    cout << "Please, enter number of employee: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, vector<double>>> getElemetsFun(set<pair<string, vector<double>>> mySet)
{
    int num = getNumberOfNamesFun(num);

    // Temporary Element.
    // pair<string, vector<double>> temporary;

    for (int i = 0; i < num; i++)
    {
        // Temporary Element.
        pair<string, vector<double>> temporary;

        cout << "\nPlease, enter employee name: ";
        cin >> temporary.first;

        double phoNum = 0;
        
        do
        {
            cout << "Please, enter employee salaries Or ( 0 to finish ): ";
            cin >> phoNum;

            if (phoNum != 0)
            {
                temporary.second.push_back(phoNum);
            }

        } while (phoNum != 0);

        mySet.insert(temporary);
        // temporary.second.clear();
    }

    return mySet;
}

// Print Set Elements - Function.
void printSetElementsFun(set<pair<string, vector<double>>> mySet)
{
    cout << "\nSorted Pairs:" << endl;
    for (const auto &p : mySet)
    {
        cout << "\nemployee name: " << p.first << endl;

        for (int i = 0; i < p.second.size(); i++)
        {
            cout << "\temployee salaries: " << p.second[i] << endl;
        }
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    set<pair<string, vector<double>>> mySet;

    // Call Functions.
    mySet = getElemetsFun(mySet);
    printSetElementsFun(mySet);

    cout << "\n"
         << endl;
}
//* End Function ..
