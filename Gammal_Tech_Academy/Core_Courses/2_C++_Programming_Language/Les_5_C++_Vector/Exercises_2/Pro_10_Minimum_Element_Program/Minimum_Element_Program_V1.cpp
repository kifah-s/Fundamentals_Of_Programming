

//* Minimum Element Program (Version 1).

/*
* Create a vector and find the minimum element x = {8, 3, 12, 5, 7}.

! Output:
! Minimum Element: 3
*/

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

void resultFun(vector<int> myNums, int minEle);

int main()
{
    // Declare Variables.
    vector<int> myNumbers = {8, 3, 12, 5, 7};
    int minimumElement = 0;

    // Call Functions.
    resultFun(myNumbers, minimumElement);

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
int minimumElementFun(vector<int> myNums, int minEle)
{
    minEle = myNums[0];
    for (int i = 1; i < myNums.size(); i++)
    {
        if (myNums[i] < minEle)
        {
            minEle = myNums[i];
        }
    }

    return minEle;
}

// Result - Function.
void resultFun(vector<int> myNums, int minEle)
{
    printWelcomeMessageFun();
    minEle = minimumElementFun(myNums, minEle);

    cout << "Minimum Element: " << minEle << "\n\n"
         << endl;
}
//* End Function ..
