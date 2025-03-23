
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

string getNextStage(const string &currentStage)
{
    map<string, string> lifecycle = {
        {"Requirement", "Design"},
        {"Design", "Development"},
        {"Development", "Testing"},
        {"Testing", "Deployment"},
        {"Deployment", "Maintenance"},
        {"Maintenance", "Requirement"}};

    string lowerCaseStage = currentStage;

    for (char &c : lowerCaseStage)
    {
        c = tolower(c);
    }

    // Capitalizing the first letter for matching key in the map
    lowerCaseStage[0] = toupper(lowerCaseStage[0]);

    return lifecycle[lowerCaseStage];
}
//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    string currentStage;
    getline(cin, currentStage);

    string nextStage = getNextStage(currentStage);

    cout << nextStage << endl;

    cout << endl
         << endl;

    return 0;
}
