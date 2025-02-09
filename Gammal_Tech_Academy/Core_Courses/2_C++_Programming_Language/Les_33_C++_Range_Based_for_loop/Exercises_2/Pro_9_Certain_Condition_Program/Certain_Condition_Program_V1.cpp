
//* Certain Condition Program (Version 1).

/*
* Write a program that uses a range-based for loop to iterate through a vector of integers and prints their values until a certain condition is met.

! Output:
! 3 7 2 9 Stop Looping.
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
    cout << "\n\nYou welcome in Certain Condition Program (Version 1) ..\n"
         << endl;
}

// Print Elements - Fuction.
void printElementsFuc(vector<int> myVec)
{
    for (int i : myVec)
    {
        cout << i << " ";
        
        if (i == 9)
        {
            cout << "Stop Looping.";
            break;
        }
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    vector<int> myVector = {3, 7, 2, 9, 10, 12, 15};

    // Call Functions.
    printWelcomeMessageFun();
    printElementsFuc(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
