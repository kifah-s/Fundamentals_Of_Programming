

//* Entered By User 2 Program (Version 1).

/*
* Develop a program that uses a set to store and automatically sort a sequence of characters entered by the user,
* Prompt the user to input 8 characters and insert them into the set.

! Input:
! Please, enter 8 characters:
! char 1: n
! char 2: k
! char 3: p
! char 4: d
! char 5: H
! char 6: j
! char 7: p
! char 8: o

! Output:
! Sorted Set Elemets: H d j k n o p
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(set<char> mySet);

int main()
{
    // Declare Variables.
    set<char> mySet;

    // Call Functions.
    resultFun(mySet);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Entered By User 2 Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
set<char> getElements(set<char> mySet)
{
    char c = 0;
    cout << "Please, enter 8 characters:\n";
    for (int i = 0; i < 8; i++)
    {
        cout << "char " << i + 1 << ": ";
        cin >> c;
        mySet.insert(c);
    }

    return mySet;
}

// Print Elements - Function.
void printElementsFun(set<char> mySet)
{
    cout << "\nSorted Set Elemets: ";

    // set<char>::iterator it;
    // for (it = mySet.begin(); it != mySet.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (const char &value : mySet)
    {
        cout << value << " ";
    }
}

// Result - Function.
void resultFun(set<char> mySet)
{
    printWelcomeMessageFun();
    mySet = getElements(mySet);
    printElementsFun(mySet);

    cout << "\n\n"
         << endl;
}
//* End Function ..
