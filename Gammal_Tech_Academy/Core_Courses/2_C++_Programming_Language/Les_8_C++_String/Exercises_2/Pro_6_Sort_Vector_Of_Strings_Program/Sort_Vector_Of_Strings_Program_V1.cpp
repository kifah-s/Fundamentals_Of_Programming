

//* Sort Vector Of Strings Program (Version 1).

/*
* Write a program to sort a vector of strings in descending order,
* The vector strVector is initially {"apple", "orange", "banana", "grape"}


! Output:
! Sorted vector of string in descending order: orange grape banana apple
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <set>

using namespace std;

void resultFun(vector<string> myVec);

int main()
{
    // Declare Variables.
    vector<string> myVector = {"apple", "orange", "banana", "grape"};

    // Call Functions.
    resultFun(myVector);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sort Vector Of Strings Program (Version 1) ..\n"
         << endl;
}

// Print Elements - Function.
void printElementsFun(vector<string> myVec)
{
    sort(myVec.begin(), myVec.end(), greater<string>());

    cout << "Sorted vector of string in descending order: ";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
}

// Result - Function.
void resultFun(vector<string> myVec)
{
    printWelcomeMessageFun();
    printElementsFun(myVec);

    cout << "\n\n"
         << endl;
}
//* End Function ..
