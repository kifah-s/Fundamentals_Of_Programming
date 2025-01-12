
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <map>
#include <vector>

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
    map<string, vector<pair<string, int>>> tasks;
    map<string, vector<int>> actualTimes;
    string name;
    int taskCount, usualTime, actualTime;
    string task;

    // Reading input tasks and usual times
    for (int i = 0; i < N; ++i)
    {
        cin >> name >> taskCount;
        vector<pair<string, int>> tempTasks;
        for (int j = 0; j < taskCount; ++j)
        {
            cin >> task >> usualTime;
            tempTasks.push_back(make_pair(task, usualTime));
        }
        tasks[name] = tempTasks;
    }

    // Reading actual times
    for (int i = 0; i < N; ++i)
    {
        cin >> name;
        vector<int> tempTimes;
        for (int j = 0; j < tasks[name].size(); ++j)
        {
            cin >> actualTime;
            tempTimes.push_back(actualTime);
        }
        actualTimes[name] = tempTimes;
    }
    
    // Identifying potential managers
    for (auto &employee : tasks)
    {
        name = employee.first;
        bool isPotentialManager = true;
        for (int i = 0; i < employee.second.size(); ++i)
        {
            if (actualTimes[name][i] > employee.second[i].second)
            {
                isPotentialManager = false;
                break;
            }
        }
        if (isPotentialManager)
        {
            cout << name << endl;
        }
    }

    cout << "\n\n";

    return 0;
}
