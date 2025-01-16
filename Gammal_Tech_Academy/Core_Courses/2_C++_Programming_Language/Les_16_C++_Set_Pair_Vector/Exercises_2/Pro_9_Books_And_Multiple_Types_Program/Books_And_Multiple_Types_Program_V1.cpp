
//* Books And Multiple Types Program (Version 1).

/*
* Create a set of pairs to store book genres along with the number of books in each genre. Print the sorted pairs.

! Input:
! Please, enter number of type book: 2

! Please, enter type book: a
! Please, enter number of type book Or ( 0 to finish ): 20
! Please, enter number of type book Or ( 0 to finish ): 30
! Please, enter number of type book Or ( 0 to finish ): 0

! Please, enter type book: b
! Please, enter number of type book Or ( 0 to finish ): 10
! Please, enter number of type book Or ( 0 to finish ): 20
! Please, enter number of type book Or ( 0 to finish ): 0


! Output:
! Sorted Pairs:
! type book: a
! number of type books: 20
! number of type books: 30

! type book: b
! number of type books: 10
! number of type books: 20
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
    cout << "\n\nYou welcome in type Books And Multiple Types Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Names - Function
int getNumberOfNamesFun(int num)
{
    cout << "Please, enter number of type book: ";
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

        cout << "\nPlease, enter type book: ";
        cin >> temporary.first;

        double phoNum = 0;
        
        do
        {
            cout << "Please, enter number of type book Or ( 0 to finish ): ";
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
        cout << "\ntype book: " << p.first << endl;

        for (int i = 0; i < p.second.size(); i++)
        {
            cout << "\tnumber of type books: " << p.second[i] << endl;
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
