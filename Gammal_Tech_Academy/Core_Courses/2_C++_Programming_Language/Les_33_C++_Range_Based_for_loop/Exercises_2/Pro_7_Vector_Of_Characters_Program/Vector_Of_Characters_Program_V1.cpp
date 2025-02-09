
//* Vector Of Characters Program (Version 1).

/*
* Write a program that uses a range-based for loop with an iterator to iterate through a vector of characters and print their values.

! Output:
! a b c d e
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
    cout << "\n\nYou welcome in Vector Of Characters Program (Version 1) ..\n"
         << endl;
}

// Print Elements - Fuction.
void printElementsFuc(vector<char> myVec)
{
    for (char i : myVec)
    {
        cout << i << " ";
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    vector<char> myVector = {'a', 'b', 'c', 'd', 'e'};

    // Call Functions.
    printWelcomeMessageFun();
    printElementsFuc(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
