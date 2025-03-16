
//*  Problem Solving ..

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Problem Solving ..\n"
         << endl;
}

string getNextStage(string currentStage)
{
    if (currentStage == "Requirements")
    {
        return "Design";
    }
    if (currentStage == "Design")
    {
        return "Implementation";
    }
    if (currentStage == "Implementation")
    {
        return "Verification";
    }
    if (currentStage == "Verification")
    {
        return "Maintenance";
    }
    if (currentStage == "Maintenance")
    {
        return "Cycle Complete";
    }
    return "Invalid Stage";
}
//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();
    string currentStage;
    cin >> currentStage;
    cout << getNextStage(currentStage) << endl;

    cout << endl
         << endl;

    return 0;
}
