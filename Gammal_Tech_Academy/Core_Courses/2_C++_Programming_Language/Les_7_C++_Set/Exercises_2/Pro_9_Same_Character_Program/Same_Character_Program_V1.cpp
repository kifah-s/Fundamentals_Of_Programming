

//* Same Character Program (Version 1).

/*
* Write a program that utilizes a set to store and automatically sort a sequence of characters entered by the user,
* Allow the user to input characters until they enter the same character twice consecutively,
* Print the sorted set of unique characters.


! Input:
! Please, enter a character (enter the same character to stop):
! Char 1: a
! Char 2: c
! Char 3: v
! Char 4: e
! Char 5: e

! Output:
! Sorted Set Elemets: a c e v
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
// #include <iterator>

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
    cout << "\n\nYou welcome in Same Character Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
set<char> getElements(set<char> mySet)
{
    char userInput, previousInput = '\0';
    int i = 1;
    cout << "Please, enter a character (enter the same character to stop):\n";
    cout << "char " << i << ": ";
    cin >> userInput;

    while (userInput != previousInput)
    {
        i++;
        cout << "char " << i << ": ";
        mySet.insert(userInput);
        previousInput = userInput;
        cin >> userInput;
    }

    return mySet;
}

// Print Elements - Function.
void printElementsFun(set<char> mySet)
{
    cout << "\nSorted Set Elemets: ";
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
