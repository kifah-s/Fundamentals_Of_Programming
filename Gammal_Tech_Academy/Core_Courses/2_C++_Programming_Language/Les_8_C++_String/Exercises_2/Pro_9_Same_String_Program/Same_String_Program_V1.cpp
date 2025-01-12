

//* Same String Program (Version 1).

/*
* Develop a program that uses a set to store and automatically sort a sequence of words entered by the user,
* Allow the user to input words until they enter the same word twice consecutively,
* Print the sorted set of unique words.


! Input:
! Please, enter a word (enter the same word to stop): apple
! Please, enter a word (enter the same word to stop): banana
! Please, enter a word (enter the same word to stop): grape
! Please, enter a word (enter the same word to stop): grape

! Output:
! Sorted Words: apple banana grape
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
// #include <iterator>

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
    cout << "\n\nYou welcome in Same String Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
set<string> getElements(set<string> mySet)
{
    string userInput, previousInput;

    cout << "Please, enter a word (enter the same word to stop): ";
    cin >> userInput;
    mySet.insert(userInput);

    while (userInput != previousInput)
    {
        cout << "Please, enter a word (enter the same word to stop): ";
        mySet.insert(userInput);
        previousInput = userInput;
        cin >> userInput;
    }

    return mySet;
}

// Print Elements - Function.
void printElementsFun(set<string> mySet)
{
    cout << "\nSorted Set Elemets: ";
    for (const string &value : mySet)
    {
        cout << value << " ";
    }
}

// Result - Function.
void resultFun(set<string> mySet)
{
    printWelcomeMessageFun();
    mySet = getElements(mySet);
    printElementsFun(mySet);

    cout << "\n\n"
         << endl;
}
//* End Function ..
