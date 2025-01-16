
//* University And Multiple Students Program (Version 1).

/*
* Create a set of pairs to store university names along with the number of students. Print the sorted pairs.

! Input:
! Please, enter number of university: 2

! Please, enter university name: a
! Please, enter university number of students Or ( 0 to finish ): 20
! Please, enter university number of students Or ( 0 to finish ): 30
! Please, enter university number of students Or ( 0 to finish ): 0

! Please, enter university name: b
! Please, enter university number of students Or ( 0 to finish ): 10
! Please, enter university number of students Or ( 0 to finish ): 20
! Please, enter university number of students Or ( 0 to finish ): 0


! Output:
! Sorted Pairs:
! university name: a
! university number of students: 20
! university number of students: 30

! university name: b
! university number of students: 10
! university number of students: 20
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
    cout << "\n\nYou welcome in University And Multiple Students Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Names - Function
int getNumberOfNamesFun(int num)
{
    cout << "Please, enter number of university: ";
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

        cout << "\nPlease, enter university name: ";
        cin >> temporary.first;

        double phoNum = 0;
        
        do
        {
            cout << "Please, enter university number of students Or ( 0 to finish ): ";
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
        cout << "\nuniversity name: " << p.first << endl;

        for (int i = 0; i < p.second.size(); i++)
        {
            cout << "\tuniversity number of students: " << p.second[i] << endl;
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
