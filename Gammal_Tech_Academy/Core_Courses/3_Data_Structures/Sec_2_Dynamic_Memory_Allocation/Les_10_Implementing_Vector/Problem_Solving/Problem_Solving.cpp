
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
    
    cout << endl
         << endl;

    return 0;
}
