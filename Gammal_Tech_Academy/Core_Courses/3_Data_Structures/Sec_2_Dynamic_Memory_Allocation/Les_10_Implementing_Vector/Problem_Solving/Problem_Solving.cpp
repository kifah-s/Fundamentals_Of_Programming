
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << endl
         << "Problem Solving .." << endl
         << endl;
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int n;
    cin >> n;

    vector<int> projects(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> projects[i];
    }
    
    sort(projects.rbegin(), projects.rend());
    
    for (int i = 0; i < n; i++)
    {
        cout << projects[i] << " ";
    }

    cout << endl;

    return 0;
}
