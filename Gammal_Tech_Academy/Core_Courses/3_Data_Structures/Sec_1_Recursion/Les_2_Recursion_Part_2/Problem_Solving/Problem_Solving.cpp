
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

//* Global Variables.

// Declare Global Variables.
vector<int> subordinates[1001];
int employeeCount[1001];

//* End Global Variables.

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

void countSubordinates(int employee)
{
    employeeCount[employee] = 1; // Counting the employee themselves

    for (int sub : subordinates[employee])
    {
        countSubordinates(sub);
        employeeCount[employee] += employeeCount[sub];
    }
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int N;
    cin >> N;

    for (int i = 2; i <= N; i++)
    {
        int senior;
        cin >> senior;

        subordinates[senior].push_back(i);
    }

    countSubordinates(1);

    for (int i = 1; i <= N; i++)
    {
        cout << employeeCount[i] << endl;
    }

    cout << "\n\n";

    return 0;
}
