

//* Clear All Elements Program (Version 1).

/*
* write a program to Add the elements 5, 9, 200, and -3 to
* a vector and Clear all elements from a vector.

! Output:
! Elements in vector: 0
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
    cout << "\n\nYou welcome in Clear All Elements Program (Version 1) ..\n"
         << endl;
}

// Add Elements - Function.
vector<int> addElementsFun(vector<int> myNums)
{
    myNums.push_back(5);
    myNums.push_back(9);
    myNums.push_back(200);
    myNums.push_back(-3);

    return myNums;
}

// Clear All Elements - Function.
vector<int> clearAllElementsFun(vector<int> myNums)
{
    myNums.clear();

    return myNums;
}

// Print Elements - Function.
void printElementsFun(vector<int> myNums)
{
    cout << "Elements in vector: " << myNums.size();
}

// Result - Function.
void resultFun(vector<int> myNums)
{
    printWelcomeMessageFun();
    myNums = addElementsFun(myNums);
    myNums = clearAllElementsFun(myNums);
    printElementsFun(myNums);

    cout << "\n\n"
         << endl;
}
//* End Function ..
