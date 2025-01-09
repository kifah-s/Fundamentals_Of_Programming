

//* Concatenate Vectors Program (Version 1).

/*
* Create two vectors and concatenate them into a third vector.

! Output:
! Elements in vector 3:
! 1
! 2
! 3
! 4
! 5
! 6
*/

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

void resultFun(vector<int> myNums_1, vector<int> myNums_2, vector<int> myNums_3);

int main()
{
    // Declare Variables.
    vector<int> myNumbers_1 = {1, 2, 3}, myNumbers_2 = {4, 5, 6}, myNumbers_3;

    // Call Functions.
    resultFun(myNumbers_1, myNumbers_2, myNumbers_3);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Concatenate Vectors Program (Version 1) ..\n"
         << endl;
}

// Concatenate Vectors - Function.
vector<int> concatenateVectorsFun(vector<int> myNums_1, vector<int> myNums_2, vector<int> myNums_3)
{
    // for (int i = 0; i < myNums_1.size(); i++)
    // {
    //     myNums_3.push_back(myNums_1[i]);
    // }
    // for (int i = 0; i < myNums_2.size(); i++)
    // {
    //     myNums_3.push_back(myNums_2[i]);
    // }

    myNums_3 = myNums_1;
    for (int i = 0; i < myNums_2.size(); i++)
    {
        myNums_3.push_back(myNums_2[i]);
    }

    return myNums_3;
}

// Print Elements - Function.
void printElementsFun(vector<int> myNums_3)
{
    cout << "Elements in vector 3:\n";
    for (int i = 0; i < myNums_3.size(); i++)
    {
        cout << myNums_3[i] << "\n";
    }
}

// Result - Function.
void resultFun(vector<int> myNums_1, vector<int> myNums_2, vector<int> myNums_3)
{
    printWelcomeMessageFun();
    myNums_3 = concatenateVectorsFun(myNums_1, myNums_2, myNums_3);
    printElementsFun(myNums_3);

    cout << "\n\n"
         << endl;
}
//* End Function ..
