
//* Negative Number To Stop Program (Version 1).

/*
* Create a program that utilizes a set to store and automatically sort a sequence of integers entered by the user,
* Prompt the user to input integers until they enter a negative number,
* and then insert them into the set.


! Input:
! Please, enter number OR (enter a negative number to stop): 6
! Please, enter number OR (enter a negative number to stop): 5
! Please, enter number OR (enter a negative number to stop): 9
! Please, enter number OR (enter a negative number to stop): 7
! Please, enter number OR (enter a negative number to stop): -1

! Output:
! Sorted Set Elements: 5 6 7 9
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
    cout << "\n\nYou welcome in Negative Number To Stop Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
set<int> getElementsFun(set<int> mySet)
{
    int num = 0;
    
    cout << "Please, enter number OR (enter a negative number to stop): ";
    cin >> num;

    while (num >= 0)
    {
        mySet.insert(num);
        cout << "Please, enter number OR (enter a negative number to stop): ";
        cin >> num;
    }

    return mySet;
}

// Result - Function.
void resultFun(set<int> mySet)
{
    printWelcomeMessageFun();
    mySet = getElementsFun(mySet);

    cout << "\nSorted Set Elements: ";
    for (const int &value : mySet)
    {
        cout << value << " ";
    }

    cout << "\n"
         << endl;
}
//* End Function ..
