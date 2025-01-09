

//* Copy Elements Program (Version 1).

/*
* write a program to Add the elements 5, 9, 200, and -3 to
* a vector and Copy elements from one vector to another.

! Output:
! Elements in vector 2:
! 5
! 9
! 200
! -3
*/

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

void resultFun(vector<int> myNums_1, vector<int> myNums_2);

int main()
{
    // Declare Variables.
    vector<int> myNumbers_1, myNumbers_2;

    // Call Functions.
    resultFun(myNumbers_1, myNumbers_2);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Copy Elements Program (Version 1) ..\n"
         << endl;
}

// Add Elements - Function.
vector<int> addElementsFun(vector<int> myNums_1)
{
    myNums_1.push_back(5);
    myNums_1.push_back(9);
    myNums_1.push_back(200);
    myNums_1.push_back(-3);

    return myNums_1;
}

// Copy Elements - Function.
vector<int> copyElementsFun(vector<int> myNums_1, vector<int> myNums_2)
{
    // myNums_2.resize(myNums_1.size());
    // for (int i = 0; i < myNums_1.size(); i++)
    // {
    //     myNums_2[i] = myNums_1[i];
    // }

    // myNums_2.resize(myNums_1.size());
    // copy(myNums_1.begin(), myNums_1.end(), myNums_2.begin());

    myNums_2 = myNums_1;

    return myNums_2;
}

// Print Elements - Function.
void printElementsFun(vector<int> myNums_2)
{
    cout << "Elements in vector 2: \n";
    for (int i = 0; i < myNums_2.size(); i++)
    {
        cout << myNums_2[i] << endl;
    }
}

// Result - Function.
void resultFun(vector<int> myNums_1, vector<int> myNums_2)
{
    printWelcomeMessageFun();
    myNums_1 = addElementsFun(myNums_1);
    myNums_2 = copyElementsFun(myNums_1, myNums_2);
    printElementsFun(myNums_2);

    cout << "\n\n"
         << endl;
}
//* End Function ..
