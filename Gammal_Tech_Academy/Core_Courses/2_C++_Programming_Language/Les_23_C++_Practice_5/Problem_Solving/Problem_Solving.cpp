
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

string identifyPattern(const string &scenario)
{
    if (scenario.find("single configuration object") != string::npos)
    {
        return "Singleton";
    }
    else if (scenario.find("update when the data model changes") != string::npos)
    {
        return "Observer";
    }
    else if (scenario.find("without specifying the exact class of object") != string::npos)
    {
        return "Factory Method";
    }
    else if (scenario.find("strategies for different operations") != string::npos)
    {
        return "Strategy";
    }
    else if (scenario.find("add responsibilities to objects dynamically") != string::npos)
    {
        return "Decorator";
    }
    return "Unknown Pattern";
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int N;
    cin >> N;
    cin.ignore();
    vector<string> scenarios(N);
    for (int i = 0; i < N; ++i)
    {
        getline(cin, scenarios[i]);
    }
    for (const auto &scenario : scenarios)
    {
        cout << identifyPattern(scenario) << endl;
    }

    cout << "\n\n";

    return 0;
}
