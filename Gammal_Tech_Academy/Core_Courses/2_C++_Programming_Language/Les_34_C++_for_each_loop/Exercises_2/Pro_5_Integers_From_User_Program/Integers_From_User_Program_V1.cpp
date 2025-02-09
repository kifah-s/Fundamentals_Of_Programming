
//* Integers From User Program (Version 1).

/*
* Write program that uses the for_each loop to input five integers from the user and print their values.

! Input:
! Please, enter five integers:
! int 1: 1
! int 2: 2
! int 3: 3
! int 4: 4
! int 5: 5

! Output:
! 1 2 3 4 5
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
    cout << "\n\nYou welcome in Integers From User Program (Version 1) ..\n"
         << endl;
}

// Get Integers - Function.
vector<int> getIntegersFun()
{
    vector<int> myVec;
    int num = 0;

    cout << "Please, enter five integers:" << endl;
    for (int i = 0; i < 5; i++)
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
    cout << endl;
    for_each(myVec.begin(), myVec.end(), printFuc);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    vector<int> myVector;

    // Call Functions.
    printWelcomeMessageFun();
    myVector = getIntegersFun();
    usingForEachFun(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
