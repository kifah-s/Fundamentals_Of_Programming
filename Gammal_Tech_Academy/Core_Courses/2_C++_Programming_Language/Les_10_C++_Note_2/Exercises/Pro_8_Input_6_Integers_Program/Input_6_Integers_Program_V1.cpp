
//* Input 6 Integers Program (Version 1).

/*
* Create a program that employs a set to store and automatically sort a sequence of integers entered by the user,
* Prompt the user to input 6 integers and insert them into the set.


! Input:
! Please, enter 6 numbers:
! num 1: 1
! num 2: 5
! num 3: 6
! num 4: 2
! num 5: 8
! num 6: 7

! Output:
! Sorted Set Elements: 1 2 5 6 7 8
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
    cout << "\n\nYou welcome in Input 6 Integers Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
set<int> getElementsFun(set<int> mySet)
{
    int num = 0;
    cout << "Please, enter 6 numbers:\n";
    for (int i = 0; i < 6; i++)
    {
        cout << "num " << i + 1 << ": ";
        cin >> num;

        mySet.insert(num);
    }

    return mySet;
}

// Result - Function.
void resultFun(set<int> mySet)
{
    printWelcomeMessageFun();
    mySet = getElementsFun(mySet);

    cout << "\nSorted Set Elements: ";
    for (const float &value : mySet)
    {
        cout << value << " ";
    }

    cout << "\n"
         << endl;
}
//* End Function ..
