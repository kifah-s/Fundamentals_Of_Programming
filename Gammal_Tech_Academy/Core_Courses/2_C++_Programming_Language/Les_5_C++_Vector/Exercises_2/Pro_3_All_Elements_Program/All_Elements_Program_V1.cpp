

//* All Elements Program (Version 1).

/*
* write a program to Add the elements 5, 9, 200, and -3 to
* a vector Print all elements of a vector using a loop.

! Output:
! Elements in vector:
! 5
! 9
! 200
! -3
*/

#include <iostream>
#include <array>
#include <vector>

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
    cout << "\n\nYou welcome in All Elements Program (Version 1) ..\n"
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

// Print Elements - Function.
void allElementsFun(vector<int> myNums)
{
    cout << "Elements in vector: \n";
    for (int i = 0; i < myNums.size(); i++)
    {
        cout << myNums[i] << endl;
    }
}

// Result - Function.
void resultFun(vector<int> myNums)
{
    printWelcomeMessageFun();
    myNums = addElementsFun(myNums);
    allElementsFun(myNums);

    cout << "\n\n"
         << endl;
}
//* End Function ..
