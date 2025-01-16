
//* City And Multiple Temperatures Program (Version 1).

/*
* Create a set of pairs to store city names along with their respective temperatures. Print the sorted pairs.

! Input:
! Please, enter number of city: 2

! Please, enter city name: france
! Please, enter city temperatures Or ( 0 to finish ): 20
! Please, enter city temperatures Or ( 0 to finish ): 30
! Please, enter city temperatures Or ( 0 to finish ): 0

! Please, enter city name: japan
! Please, enter city temperatures Or ( 0 to finish ): 10
! Please, enter city temperatures Or ( 0 to finish ): 20
! Please, enter city temperatures Or ( 0 to finish ): 0


! Output:
! Sorted Pairs:
! city name: france
! city temperatures: 20
! city temperatures: 30

! city name: japan
! city temperatures: 10
! city temperatures: 20
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
    cout << "\n\nYou welcome in City And Multiple Temperatures Program (Version 1) ..\n"
         << endl;
}

// Get Number Of names - Function
int getNumberOfNamesFun(int num)
{
    cout << "Please, enter number of city: ";
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

        cout << "\nPlease, enter city name: ";
        cin >> temporary.first;

        double phoNum = 0;
        
        do
        {
            cout << "Please, enter city temperatures Or ( 0 to finish ): ";
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
        cout << "\ncity name: " << p.first << endl;

        for (int i = 0; i < p.second.size(); i++)
        {
            cout << "\tcity temperatures: " << p.second[i] << endl;
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
