

//* Set Of Floating Program (Version 1).

/*
* Write a program that uses a set to store and automatically sort a sequence of floating-point numbers,
* Insert the values 3.5, 1.2, 2.8, 4.0, and 1.2 into the set.

! Output:
! Sorted Set Elemets: 1.2 2.8 3.5 4.0
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(set<float> mySet);

int main()
{
    // Declare Variables.
    set<float> mySet;

    // Call Functions.
    resultFun(mySet);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Set Of Floating Program (Version 1) ..\n"
         << endl;
}

// Add Elements - Function.
set<float> addElements(set<float> mySet)
{
    mySet.insert(3.5);
    mySet.insert(1.2);
    mySet.insert(2.8);
    mySet.insert(4.0);
    mySet.insert(1.2);

    return mySet;
}

// Print Elements - Function.
void printElementsFun(set<float> mySet)
{
    cout << "Sorted Set Elemets: ";

    // set<float>::iterator it;
    // for (it = mySet.begin(); it != mySet.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (const float &value : mySet)
    {
        cout << value << " ";
    }
}

// Result - Function.
void resultFun(set<float> mySet)
{
    printWelcomeMessageFun();
    mySet = addElements(mySet);
    printElementsFun(mySet);

    cout << "\n\n"
         << endl;
}
//* End Function ..
