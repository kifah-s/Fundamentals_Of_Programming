
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int N;
    cin >> N;
    map<string, set<string>> languageMap; // Maps language to employees
    map<string, string> employeeLanguage; // Maps employee to their language
        string name,
        language;
    for (int i = 0; i < N; ++i)
    {
        cin >> name >> language;
        languageMap[language].insert(name);
        employeeLanguage[name] = language;
    }
    string projectLanguage;
    cin >> projectLanguage;

    // Find employees who can communicate in the project language
    set<string> potentialCommunicators = languageMap[projectLanguage];
    
    // Find the best communicators
    map<int, set<string>> communicatorScore; // Maps score to employee
    for (const auto &employee : potentialCommunicators)
    {
        int score = 0;
        for (const auto &lang : languageMap)
        {
            if (lang.first != employeeLanguage[employee])
            {
                score += lang.second.size();
            }
        }
        communicatorScore[score].insert(employee);
    }
    // Output the best communicators
    if (!communicatorScore.empty())
    {
        auto it = communicatorScore.rbegin(); // The highest score
        for (const auto &employee : it->second)
        {
            cout << employee << endl;
        }
    }

    cout << "\n\n";

    return 0;
}
