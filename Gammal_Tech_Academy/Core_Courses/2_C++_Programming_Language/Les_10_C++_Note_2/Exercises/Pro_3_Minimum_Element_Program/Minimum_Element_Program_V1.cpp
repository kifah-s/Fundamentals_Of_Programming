
//* Minimum Element Program (Version 1).

/*
* Create a vector and find the minimum element x = {8, 3, 12, 5, 7}.


! Output:
! Minium Element: 3
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(vector<int> myVec, int minEle);

int main()
{
    // Declare Variables.
    vector<int> myVector = {8, 3, 12, 5, 7};
    int miniumElement = 0;

    // Call Functions.
    resultFun(myVector, miniumElement);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Minimum Element Program (Version 1) ..\n"
         << endl;
}

// Minimum Element - Function.
int minimumElementFun(vector<int> myVec, int minEle)
{
    minEle = myVec[0];

    for (int i = 0; i < myVec.size(); i++)
    {
        if (myVec[i] < minEle)
        {
            minEle = myVec[i];
        }
    }

    return minEle;
}

// Result - Function.
void resultFun(vector<int> myVec, int minEle)
{
    printWelcomeMessageFun();
    minEle = minimumElementFun(myVec, minEle);
    cout << "Minimum Element: " << minEle;

    cout << "\n"
         << endl;
}
//* End Function ..
