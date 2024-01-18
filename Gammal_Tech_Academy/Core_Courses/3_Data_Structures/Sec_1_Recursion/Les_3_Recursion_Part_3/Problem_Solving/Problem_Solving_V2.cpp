
//* >>>>> Problem Solving (Version 2) <<<<< */

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << endl
         << "Problem Solving (Version 2) .." << endl
         << endl;
}

// Stages waterfall methodology / Recursion Function.
string stagesWaterfallMethodologyRecFun(string x)
{
    if (x == "Requirements")
    {
        return "Design";
    }
    if (x == "Design")
    {
        return "Implementation";
    }
    if (x == "Implementation")
    {
        return "Verification";
    }
    if (x == "Verification")
    {
        return "Maintenance";
    }
    if (x == "Maintenance")
    {
        return "Cycle Complete";
    }

    return "Invalid Stage";
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    // Declare Variables.
    string currentStage = "";
    int num = 0;

    // Receive Value From User.
    cout << "Please enter the Current stage: ";
    cin >> currentStage;

    // Call Function.
    cout << "Next Stage: " << stagesWaterfallMethodologyRecFun(currentStage) << endl;

    cout << endl;

    return 0;
}
