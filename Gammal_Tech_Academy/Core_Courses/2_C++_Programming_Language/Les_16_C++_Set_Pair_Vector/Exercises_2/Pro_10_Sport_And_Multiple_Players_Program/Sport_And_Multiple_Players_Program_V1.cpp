
//* Sport And Multiple Players Program (Version 1).

/*
* Create a set of pairs to store sport names along with the number of players in each sport. Print the sorted pairs. 

! Input:
! Please, enter number of sport: 2

! Please, enter sport: a
! Please, enter number of players Or ( 0 to finish ): 20
! Please, enter number of players Or ( 0 to finish ): 30
! Please, enter number of players Or ( 0 to finish ): 0

! Please, enter sport: b
! Please, enter number of players Or ( 0 to finish ): 10
! Please, enter number of players Or ( 0 to finish ): 20
! Please, enter number of players Or ( 0 to finish ): 0


! Output:
! Sorted Pairs:
! sport: a
! number of players: 20
! number of players: 30

! sport: b
! number of players: 10
! number of players: 20
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
    cout << "\n\nYou welcome in type Sport And Multiple Players Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Names - Function
int getNumberOfNamesFun(int num)
{
    cout << "Please, enter number of sports: ";
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

        cout << "\nPlease, enter sport: ";
        cin >> temporary.first;

        double phoNum = 0;
        
        do
        {
            cout << "Please, enter number of players Or ( 0 to finish ): ";
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
        cout << "\nsport: " << p.first << endl;

        for (int i = 0; i < p.second.size(); i++)
        {
            cout << "\tnumber of players: " << p.second[i] << endl;
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
