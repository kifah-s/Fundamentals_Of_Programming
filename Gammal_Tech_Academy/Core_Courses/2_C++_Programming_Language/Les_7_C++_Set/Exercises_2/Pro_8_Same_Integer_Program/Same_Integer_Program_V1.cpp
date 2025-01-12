

//* Same Integer Program (Version 1).

/*
* Develop a program that uses a set to store and automatically sort a sequence of integers entered by the user
* Allow the user to input integers until they enter the same integer twice in a row. Print the sorted set of unique integers.


! Input:
! Please, enter a number (enter the same number to stop):
! Num 1: 5
! Num 2: 6
! Num 3: 3
! Num 4: 8
! Num 5: 8

! Output:
! Sorted Set Elemets: 5 6 3 8
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
// #include <iterator>

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
    cout << "\n\nYou welcome in Same Integer Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
set<int> getElements(set<int> mySet)
{
    int userInput = 0, previousInput = -1, i = 1;
    cout << "Please, enter a number (enter the same number to stop):\n";
    cout << "Num " << i << ": ";
    cin >> userInput;

    while (userInput != previousInput)
    {
        i++;
        cout << "Num " << i << ": ";
        mySet.insert(userInput);
        previousInput = userInput;
        cin >> userInput;
    }

    return mySet;
}

// Print Elements - Function.
void printElementsFun(set<int> mySet)
{
    cout << "\nSorted Set Elemets: ";
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
