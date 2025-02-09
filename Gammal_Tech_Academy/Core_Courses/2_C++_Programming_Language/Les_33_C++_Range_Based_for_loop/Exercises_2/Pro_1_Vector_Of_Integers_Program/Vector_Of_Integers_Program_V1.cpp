
//* Vector Of Integers Program (Version 1).

/*
* Write a program using the range-based for loop to iterate through a vector of integers and print their values.
* Provide the program code and the output.

! Output:
! 5 3 6 9 8 7 4
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
    cout << "\n\nYou welcome in Vector Of Integers Program (Version 1) ..\n"
         << endl;
}

// Print Elements - Fuction.
void printElementsFuc(vector<int> myVec)
{
    // for (int i : myVec)
    // {
    //     cout << i << " ";
    // }

    for (auto i : myVec)
    {
        cout << i << " ";
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    vector<int> myVector = {5, 3, 6, 9, 8, 7, 4};

    // Call Functions.
    printWelcomeMessageFun();
    printElementsFuc(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
