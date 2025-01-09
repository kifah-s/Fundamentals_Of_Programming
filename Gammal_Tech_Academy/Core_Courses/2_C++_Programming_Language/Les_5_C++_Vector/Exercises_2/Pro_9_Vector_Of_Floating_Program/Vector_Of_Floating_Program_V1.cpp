

//* Vector Of Floating Program (Version 1).

/*
* Create a vector of floating-point numbers and find the average numbers = {2.5, 3.0, 5.5, 1.8, 4.2}.

! Output:
! Average: 3.4
*/

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

void resultFun(vector<float> myNums, float ave);

int main()
{
    // Declare Variables.
    vector<float> myNumbers = {2.5, 3.0, 5.5, 1.8, 4.2};
    float average = 0;

    // Call Functions.
    resultFun(myNumbers, average);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Vector Of Floating Program (Version 1) ..\n"
         << endl;
}

// Calclate Average - Function.
float calclateAverageFun(vector<float> myNums, float ave)
{
    float sum = 0;
    // int counter = 0;
    for (int i = 0; i < myNums.size(); i++)
    {
        sum = sum + myNums[i];
        // counter++;
    }
    ave = sum / myNums.size();

    return ave;
}

// Result - Function.
void resultFun(vector<float> myNums, float ave)
{
    printWelcomeMessageFun();
    ave = calclateAverageFun(myNums, ave);

    cout << "Average: " << ave << "\n\n"
         << endl;
}
//* End Function ..
