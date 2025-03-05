
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

vector<int> subordinates[1001];
int employeeCount[1001];

void countSubordinates(int employee)
{
    employeeCount[employee] = 1; // Counting the employee themselves
    for (int sub : subordinates[employee])
    {
        countSubordinates(sub);
        employeeCount[employee] += employeeCount[sub];
    }
}
//* End Function ..

int main()
{
    // Declare Variables.
    int N;

    // Call Functions.
    printWelcomeMessageFun();

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

    cout << endl
         << endl;

    return 0;
}
