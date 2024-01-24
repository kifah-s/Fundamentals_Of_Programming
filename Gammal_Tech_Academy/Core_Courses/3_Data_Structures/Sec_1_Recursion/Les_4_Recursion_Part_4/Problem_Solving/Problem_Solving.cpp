
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <ctime>
#include <string>
#include <map>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << endl
         << "Problem Solving .." << endl
         << endl;
}

// Next Stage / Recursive Function.
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

//* End Functions ..

int main()
{
    problemSolvingFun();

    string currentStage;
    cout << "Please enter the Current stage: ";
    getline(cin, currentStage);

    string nextStage = getNextStage(currentStage);
    cout << "The Next stage is: ";
    cout << nextStage << endl;

    cout << endl;

    return 0;
}
