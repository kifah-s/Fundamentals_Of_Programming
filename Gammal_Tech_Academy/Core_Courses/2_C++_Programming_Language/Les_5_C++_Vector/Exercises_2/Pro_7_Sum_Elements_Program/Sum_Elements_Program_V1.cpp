

//* Sum Elements Program (Version 1).

/*
* Create a vector and find the sum of its elements {3, 7, 2, 10, -5}

! Output:
! Sum Elements: 17
*/

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

void resultFun(vector<int> myNums, int sumEle);

int main()
{
    // Declare Variables.
    vector<int> myNumbers;
    int sumElements = 0;

    // Call Functions.
    resultFun(myNumbers, sumElements);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sum Elements Program (Version 1) ..\n"
         << endl;
}

// Add Elements - Function.
vector<int> addElementsFun(vector<int> myNums)
{
    myNums.push_back(3);
    myNums.push_back(7);
    myNums.push_back(2);
    myNums.push_back(10);
    myNums.push_back(-5);

    return myNums;
}

// Sum Elements - Function.
int sumElementsFun(vector<int> myNums, int sumEle)
{
    for (int i = 0; i < myNums.size(); i++)
    {
        sumEle = sumEle + myNums[i];
    }

    return sumEle;
}

// Result - Function.
void resultFun(vector<int> myNums, int sumEle)
{
    printWelcomeMessageFun();
    myNums = addElementsFun(myNums);
    sumEle = sumElementsFun(myNums, sumEle);

    cout << "Sum Elements in vector: " << sumEle << "\n\n"
         << endl;
}
//* End Function ..
