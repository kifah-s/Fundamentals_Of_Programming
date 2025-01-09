

//* Automatically Sort Program (Version 1).

/*
* Write a program that uses a set to store and automatically sort a sequence of integers,
* Insert the values 7, 2, 5, 1, and 9 into the set.

! Output:
! Sorted Set Elemets: 1 2 5 7 9
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(set<int> myNums);

int main()
{
    // Declare Variables.
    set<int> myNumbers;
    // set<int> myNumbers = {7, 2, 5, 1, 9};

    // Call Functions.
    resultFun(myNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Automatically Sort Program (Version 1) ..\n"
         << endl;
}

// Add Elements - Function.
set<int> addElements(set<int> myNums)
{
    myNums.insert(7);
    myNums.insert(2);
    myNums.insert(5);
    myNums.insert(1);
    myNums.insert(9);

    return myNums;
}

// Print Elements - Function.
void printElementsFun(set<int> myNums)
{
    cout << "Sorted Set Elemets: ";

    // set<int>::iterator it;
    // for (it = myNums.begin(); it != myNums.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (const int &value : myNums)
    {
        cout << value << " ";
    }
}

// Result - Function.
void resultFun(set<int> myNums)
{
    printWelcomeMessageFun();
    myNums = addElements(myNums);
    printElementsFun(myNums);

    cout << "\n\n"
         << endl;
}
//* End Function ..
