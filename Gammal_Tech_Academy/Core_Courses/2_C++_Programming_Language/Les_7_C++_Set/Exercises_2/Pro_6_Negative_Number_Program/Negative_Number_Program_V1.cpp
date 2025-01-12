

//* Negative Number Program (Version 1).

/*
* Create a program that utilizes a set to store and automatically sort a sequence of integers entered by the user.
* Prompt the user to input integers until they enter a negative number, and then insert them into the set.

! Input:
! Please, enter a number (enter a negative number to stop):
! Num 1: 6
! Num 2: 5
! Num 3: 9
! Num 4: 7
! Num 5: -1

! Output:
! Sorted Set Elemets: 5 6 7 9
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(set<int> mySet);

int main()
{
    // Declare Variables.
    set<int> mySet;

    // Call Functions.
    resultFun(mySet);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Negative Number Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
set<int> getElements(set<int> mySet)
{
    // int num = 0, i = 1;
    // cout << "Please, enter a number (enter a negative number to stop):\n";
    // do
    // {
    //     cout << "Num " << i << ": ";
    //     cin >> num;
    //     if (num > 0)
    //     {
    //         mySet.insert(num);
    //     }

    //     i++;

    // } while (num > 0);

    int num = 0;
    cout << "Please, enter a number (enter a negative number to stop):\n";
    for (int i = 1;; i++)
    {
        cout << "Num " << i << ": ";
        cin >> num;
        if (num > 0)
        {
            mySet.insert(num);
        }
        else
        {
            break;
        }
    }

    return mySet;
}

// Print Elements - Function.
void printElementsFun(set<int> mySet)
{
    cout << "\nSorted Set Elemets: ";

    // set<int>::iterator it;
    // for (it = mySet.begin(); it != mySet.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (const int &value : mySet)
    {
        cout << value << " ";
    }
}

// Result - Function.
void resultFun(set<int> mySet)
{
    printWelcomeMessageFun();
    mySet = getElements(mySet);
    printElementsFun(mySet);

    cout << "\n\n"
         << endl;
}
//* End Function ..
