
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Task
{
    string name;
    int priority;
};

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

bool compareTasks(const Task &a, const Task &b)
{
    return a.priority > b.priority;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int N;
    cin >> N;
    vector<Task> tasks(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> tasks[i].name >> tasks[i].priority;
    }
    sort(tasks.begin(), tasks.end(), compareTasks);
    for (const auto &task : tasks)
    {
        cout << task.name << endl;
    }

    cout << "\n\n";

    return 0;
}
