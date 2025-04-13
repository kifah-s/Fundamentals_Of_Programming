
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

//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    int N;
    cin >> N;
    // Using a set to store tasks with a custom comparator for sorting by priority.

    set<pair<int, int>, greater<pair<int, int>>> tasks;
    map<int, int> idToPriority;

    while (N--)
    {
        string command;
        cin >> command;
        if (command == "ADD")
        {
            int id, priority;
            cin >> id >> priority;
            tasks.insert({priority, id});
            idToPriority[id] = priority;
        }
        else if (command == "COMPLETE")
        {
            if (!tasks.empty())
            {
                auto it = tasks.begin();
                idToPriority.erase(it->second);
                tasks.erase(it);
            }
        }
        else if (command == "SHOW")
        {
            if (tasks.empty())
            {
                cout << "EMPTY";
            }
            else
            {
                for (auto &task : tasks)
                {
                    cout << task.second << "-" << task.first;
                    if (task != *tasks.rbegin())
                    {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }

    cout << endl
         << endl;

    return 0;
}
