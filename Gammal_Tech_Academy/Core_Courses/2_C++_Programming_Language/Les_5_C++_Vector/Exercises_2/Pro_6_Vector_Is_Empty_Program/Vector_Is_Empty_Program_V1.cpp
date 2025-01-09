

//* Vector Is Empty Program (Version 1).

/*
* Write a program and Check if a vector is empty.

! Output:
! Vector Is Empty.
*/

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

void resultFun(vector<int> myNums);

int main()
{
    // Declare Variables.
    vector<int> myNumbers;

    // Call Functions.
    resultFun(myNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Vector Is Empty Program (Version 1) ..\n"
         << endl;
}

// Check Vector - Function.
void checkVectorFun(vector<int> myNums)
{
    // int vecSize = myNums.size();
    // if (vecSize > 0)
    // {
    //     cout << "Vector Is Not Empty.";
    // }
    // else
    // {
    //     cout << "Vector Is Empty.";
    // }

    if (myNums.empty())
    {
        cout << "Vector Is Empty.";
    }
    else
    {
        cout << "Vector Is Not Empty.";
    }
}

// Result - Function.
void resultFun(vector<int> myNums)
{
    printWelcomeMessageFun();
    checkVectorFun(myNums);

    cout << "\n\n"
         << endl;
}
//* End Function ..
