

//* Asterisk Program (Version 1).

/*
* Write a program that uses a set to store and automatically sort a sequence of characters entered by the user.
* Prompt the user to input characters until they enter an asterisk (*), and then insert them into the set.

! Input:
! Please, enter Character (enter * to stop):
! char 1: a
! char 2: s
! char 3: d
! char 4: o
! char 5: *

! Output:
! Sorted Set Elemets: a d p s
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
    cout << "\n\nYou welcome in Asterisk Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
set<char> getElements(set<char> mySet)
{
    // char c;
    // int i = 1;
    // cout << "Please, enter a character (enter * to stop):\n";
    // do
    // {
    //     cout << "char " << i << ": ";
    //     cin >> c;
    //     if (c != '*')
    //     {
    //         mySet.insert(c);
    //     }

    //     i++;

    // } while (c != '*');

    char c ;
    cout << "Please, enter a character (enter * to stop):\n";
    for (int i = 1;; i++)
    {
        cout << "char " << i << ": ";
        cin >> c;
        if (c == '*')
        {
            break;
        }
        else
        {
            mySet.insert(c);
        }
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
