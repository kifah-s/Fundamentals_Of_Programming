
//* Reverse Order Program (Version 1).

/*
* Write a program that takes input from the user for eight integers and uses the for_each loop to display them in reverse order.

! Input:
! Please, enter eight integers:
! int 1: 1
! int 2: 2
! int 3: 3
! int 4: 4
! int 5: 5
! int 6: 6
! int 7: 7
! int 8: 8

! Output:
! Number of revers order: 8 7 6 5 4 3 2 1
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Reverse Order Program (Version 1) ..\n"
         << endl;
}

// Get Integers - Function.
vector<int> getIntegersFun()
{
    vector<int> myVec;
    int num = 0;

    cout << "Please, enter eight integers:" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "int " << i + 1 << ": ";
        cin >> num;

        myVec.push_back(num);
    }

    return myVec;
}

// Print - Fuction.
void printFuc(int x)
{
    cout << x << " ";
}

// Using For Each - Function.
void usingForEachFun(vector<int> myVec)
{
    // reverse(myVec.begin(), myVec.end());

    for_each(myVec.rbegin(), myVec.rend(), printFuc);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    vector<int> myVector;

    // Call Functions.
    printWelcomeMessageFun();
    myVector = getIntegersFun();
    cout << "\nNumber of revers order: ";
    usingForEachFun(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
