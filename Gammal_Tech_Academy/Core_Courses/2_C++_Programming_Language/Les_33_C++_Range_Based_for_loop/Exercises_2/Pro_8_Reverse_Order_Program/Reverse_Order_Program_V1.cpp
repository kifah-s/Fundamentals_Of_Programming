
//* Reverse Order Program (Version 1).

/*
* Write a program that uses a range-based for loop to iterate through a vector of integers in reverse order and print their values.

! Output:
! 2 4 6 8 10
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

// Print Elements - Fuction.
void printElementsFuc(vector<int> myVec)
{
    reverse(myVec.begin(), myVec.end());
    
    for (int i : myVec)
    {
        cout << i << " ";
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    vector<int> myVector = {10, 8, 6, 4, 2};

    // Call Functions.
    printWelcomeMessageFun();
    printElementsFuc(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
