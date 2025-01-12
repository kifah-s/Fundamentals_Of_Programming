
//* Vectors Floating Program (Version 1).

/*
* Create a vector of floating-point numbers and find the average numbers = {2.5, 3.0, 5.5, 1.8, 4.2}.


! Output:
! Average: 3.4
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(vector<float> myVec, float ave);

int main()
{
    // Declare Variables.
    vector<float> myVector = {2.5, 3.0, 5.5, 1.8, 4.2};
    float average = 0;

    // Call Functions.
    resultFun(myVector, average);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Vectors Floating Program (Version 1) ..\n"
         << endl;
}

// Calculate Average - Function.
float calculateAverageFun(vector<float> myVec, float ave)
{
    float counter = 0;
    float sum = 0;

    for (int i = 0; i < myVec.size(); i++)
    {
        sum = sum + myVec[i];
        // counter++;
    }

    // ave = sum / counter;
    ave = sum / myVec.size();

    return ave;
}

// Result - Function.
void resultFun(vector<float> myVec, float ave)
{
    printWelcomeMessageFun();
    ave = calculateAverageFun(myVec, ave);
    cout << "Average: " << ave;

    cout << "\n"
         << endl;
}
//* End Function ..
