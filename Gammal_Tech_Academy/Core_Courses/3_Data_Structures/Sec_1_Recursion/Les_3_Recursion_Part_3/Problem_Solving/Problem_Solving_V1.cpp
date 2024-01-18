
//* >>>>> Problem Solving (Version 1) <<<<< */

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
         << "Problem Solving (Version 1) .." << endl
         << endl;
}

// Stages waterfall methodology / Function.
void stagesWaterfallMethodologyFun(string x)
{
    vector<string> staWatMet = {"Requirements", "Design", "Implementation", "Verification", "Maintenance"};
    string nextStage = "";

    if (x == staWatMet[4])
    {
        cout << "\nCycle Complete .." << endl;
        return;
    }
    else
    {
        for (int i = 0; i < staWatMet.size(); i++)
        {
            if (x == staWatMet[i])
            {
                nextStage = staWatMet[i + 1];
            }
        }
    }

    cout << "\nNext Stage: " << nextStage << endl;
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    // Declare Variables.
    string currentStage = "";

    // Receive Value From User.
    cout << "Please enter the Current stage: ";
    cin >> currentStage;

    // Call Function.
    stagesWaterfallMethodologyFun(currentStage);

    cout << endl;

    return 0;
}
