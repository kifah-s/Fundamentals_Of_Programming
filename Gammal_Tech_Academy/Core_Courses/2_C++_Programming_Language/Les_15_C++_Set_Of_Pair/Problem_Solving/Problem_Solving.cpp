
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <set>

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

    int T;
    cin >> T;
    while (T--)
    {
        set<int> tasks;
        for (int i = 1; i <= 10; ++i)
        {
            tasks.insert(i);
        }
        for (int i = 0; i < 9; ++i)
        {
            int assignedTask;
            cin >> assignedTask;
            tasks.erase(assignedTask);
        }
        cout << *tasks.begin() << endl;

        cout << "\n\n";

        return 0;
    }
