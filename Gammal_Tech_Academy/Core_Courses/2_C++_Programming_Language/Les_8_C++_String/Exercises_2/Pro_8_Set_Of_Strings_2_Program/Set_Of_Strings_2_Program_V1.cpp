

//* Set Of Strings 2 Program (Version 1).

/*
* Develop a program that employs a set to store and automatically sort a sequence of strings entered by the user,
* Prompt the user to input 7 strings and insert them into the set.


! Input:
! Please, enter 7 String:
! Str 1: Orange
! Str 2: Apple
! Str 3: Banana
! Str 4: grape
! Str 5: chery
! Str 6: orange
! Str 7: Orange

! Output:
! Sorted Set elements: Apple Banana Orange chery grape orange
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <set>

using namespace std;

void resultFun(set<string> mySet);

int main()
{
    // Declare Variables.
    set<string> mySet;

    // Call Functions.
    resultFun(mySet);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Set Of Strings 2 Program (Version 1) ..\n"
         << endl;
}

// Get Elemets - Function.
set<string> getElemetsFun(set<string> mySet)
{
    string word;
    cout << "Please, enter 7 String:\n";
    for (int i = 0; i < 7; i++)
    {
        cout << "Str " << i + 1 << ": ";
        cin >> word;
        mySet.insert(word);
    }

    return mySet;
}

// Print Elements - Function.
void printElementsFun(set<string> mySet)
{
    cout << "\nSorted Set of string: ";

    for (const string &value : mySet)
    {
        cout << value << " ";
    }
}

// Result - Function.
void resultFun(set<string> mySet)
{
    printWelcomeMessageFun();
    mySet = getElemetsFun(mySet);
    printElementsFun(mySet);

    cout << "\n\n"
         << endl;
}
//* End Function ..
