

//* Greater Than 100 Program (Version 1).

/*
* Write a program that utilizes a set to store and automatically sort a sequence of positive integers entered by the user,
* Allow the user to input integers until they enter a number greater than 100,
* Print the sorted set of unique integers.


! Input:
! Please, enter a number (enter number greater than 100 to stop): 99
! Please, enter a number (enter number greater than 100 to stop): 84
! Please, enter a number (enter number greater than 100 to stop): 36
! Please, enter a number (enter number greater than 100 to stop): 200

! Output:
! Sorted Set Elemets: 36 84 99
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
    cout << "\n\nYou welcome in Greater Than 100 Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
set<int> getElements(set<int> mySet)
{
    int userInput = 0;
    cout << "Please, enter a number (enter number greater than 100 to stop): ";
    cin >> userInput;

    while (userInput < 100)
    {
        mySet.insert(userInput);
        cout << "Please, enter a number (enter number greater than 100 to stop): ";
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
