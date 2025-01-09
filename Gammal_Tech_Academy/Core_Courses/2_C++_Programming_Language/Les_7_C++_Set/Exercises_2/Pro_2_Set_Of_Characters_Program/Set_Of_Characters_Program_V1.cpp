

//* Set Of Characters Program (Version 1).

/*
* Develop a program that uses a set to store and automatically sort a sequence of characters,
* Insert the characters 'd', 'a', 'c', 'b', and 'd' into the set.

! Output:
! Sorted Set Elemets: a b c d
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(set<char> myNums);

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
    cout << "\n\nYou welcome in Set Of Characters Program (Version 1) ..\n"
         << endl;
}

// Add Elements - Function.
set<char> addElements(set<char> mySet)
{
    mySet.insert('d');
    mySet.insert('a');
    mySet.insert('c');
    mySet.insert('b');
    mySet.insert('d');

    return mySet;
}

// Print Elements - Function.
void printElementsFun(set<char> mySet)
{
    cout << "Sorted Set Elemets: ";

    set<char>::iterator it;
    for (it = mySet.begin(); it != mySet.end(); it++)
    {
        cout << *it << " ";
    }

    // for (const char &value : mySet)
    // {
    //     cout << value << " ";
    // }
}

// Result - Function.
void resultFun(set<char> mySet)
{
    printWelcomeMessageFun();
    mySet = addElements(mySet);
    printElementsFun(mySet);

    cout << "\n\n"
         << endl;
}
//* End Function ..
