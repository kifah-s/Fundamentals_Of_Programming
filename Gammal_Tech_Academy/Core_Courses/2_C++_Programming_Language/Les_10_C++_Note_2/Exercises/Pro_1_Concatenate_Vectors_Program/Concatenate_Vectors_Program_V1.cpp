
//* Concatenate Vectors Program (Version 1).

/*
* Create two vectors and concatenate them into a third vector x = {1, 2, 3}, y = {4, 5, 6}.


! Output:
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
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(vector<int> myVec_1, vector<int> myVec_2, vector<int> myVec_3);

int main()
{
    // Declare Variables.
    vector<int> myVector_1 = {1, 2, 3}, myVector_2 = {4, 5, 6}, myVector_3;

    // Call Functions.
    resultFun(myVector_1, myVector_2, myVector_3);

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
vector<int> concatenateVectorsFun(vector<int> myVec_1, vector<int> myVec_2, vector<int> myVec_3)
{
    int ele = 0;
    
    // myVec_3 = myVec_1;

    for (int i = 0; i < myVec_1.size(); i++)
    {
        ele = myVec_1[i];
        myVec_3.push_back(ele);
    }
    for (int i = 0; i < myVec_2.size(); i++)
    {
        ele = myVec_2[i];
        myVec_3.push_back(ele);
    }
    

    return myVec_3;
}

// Print Vector - Function.
void printVectorFun(vector<int> myVec_1, vector<int> myVec_2, vector<int> myVec_3)
{
    myVec_3 = concatenateVectorsFun(myVec_1, myVec_2, myVec_3);

    for (int i = 0; i < myVec_3.size(); i++)
    {
        cout << myVec_3[i] << "\n";
    }
}

// Result - Function.
void resultFun(vector<int> myVec_1, vector<int> myVec_2, vector<int> myVec_3)
{
    printWelcomeMessageFun();
    printVectorFun(myVec_1, myVec_2, myVec_3);

    cout << "\n"
         << endl;
}
//* End Function ..
