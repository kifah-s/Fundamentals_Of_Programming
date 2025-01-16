
//* Country And Multiple Official Languages Program (Version 1).

/*
* Create a set of pairs to store country names along with their respective official languages. Print the sorted pairs.

! Input:
! Please, enter number of countrys: 2

! Please, enter country name: france
! Please, enter country official languages Or ( 0 to finish ): france
! Please, enter country official languages Or ( 0 to finish ): france
! Please, enter country official languages Or ( 0 to finish ): 0

! Please, enter country name: japan
! Please, enter country official languages Or ( 0 to finish ): japanese
! Please, enter country official languages Or ( 0 to finish ): japanese
! Please, enter country official languages Or ( 0 to finish ): 0


! Output:
! Sorted Pairs:
! country name: france
! country official languages: france
! country official languages: france

! country name: japan
! country official languages: japanese
! country official languages: japanese
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
    cout << "\n\nYou welcome in Country And Multiple Official Languages Program (Version 1) ..\n"
         << endl;
}

// Get Number Of names - Function
int getNumberOfNamesFun(int num)
{
    cout << "Please, enter number of country: ";
    cin >> num;

    return num;
}

// Get Elements - Function.
set<pair<string, vector<string>>> getElemetsFun(set<pair<string, vector<string>>> mySet)
{
    int num = getNumberOfNamesFun(num);

    // Temporary Element.
    // pair<string, vector<string>> temporary;

    for (int i = 0; i < num; i++)
    {
        // Temporary Element.
        pair<string, vector<string>> temporary;

        cout << "\nPlease, enter country name: ";
        cin >> temporary.first;

        string phoNum;
        
        do
        {
            cout << "Please, enter country official languages Or ( 0 to finish ): ";
            cin >> phoNum;

            if (phoNum != "0")
            {
                temporary.second.push_back(phoNum);
            }

        } while (phoNum != "0");

        mySet.insert(temporary);
        // temporary.second.clear();
    }

    return mySet;
}

// Print Set Elements - Function.
void printSetElementsFun(set<pair<string, vector<string>>> mySet)
{
    cout << "\nSorted Pairs:" << endl;
    for (const auto &p : mySet)
    {
        cout << "\ncountry name: " << p.first << endl;

        for (int i = 0; i < p.second.size(); i++)
        {
            cout << "\tcountry official languages: " << p.second[i] << endl;
        }
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Set.
    set<pair<string, vector<string>>> mySet;

    // Call Functions.
    mySet = getElemetsFun(mySet);
    printSetElementsFun(mySet);

    cout << "\n"
         << endl;
}
//* End Function ..
