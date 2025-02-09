
//* Vector Of Strings Program (Version 1).

/*
* Write a program to use a range-based for loop to iterate through a vector of strings and print their values.

! Output:
! www
! gammal
! tech
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
    cout << "\n\nYou welcome in Vector Of Strings Program (Version 1) ..\n"
         << endl;
}

// Print Elements - Fuction.
void printElementsFuc(vector<string> myVec)
{
    for (string i : myVec)
    {
        cout << i << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    vector<string> myVector = {"www", "gammal", "tech"};

    // Call Functions.
    printWelcomeMessageFun();
    printElementsFuc(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
