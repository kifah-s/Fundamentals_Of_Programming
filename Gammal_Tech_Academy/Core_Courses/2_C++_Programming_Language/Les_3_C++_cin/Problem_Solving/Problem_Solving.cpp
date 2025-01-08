
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <map>
#include <string>

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

    map<string, string> departmentMap;
    departmentMap["meeting"] = "HR";
    departmentMap["project"] = "Project Management";
    departmentMap["team"] = "Team Management";
    departmentMap["news"] = "Public Relations";

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string query;
        cin >> query;

        if (departmentMap.find(query) != departmentMap.end())
        {
            cout << departmentMap[query] << endl;
        }
        else
        {
            cout << "Invalid Query" << endl;
        }
    }

    cout << "\n\n";

    return 0;
}
