
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <string>
#include <algorithm>

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

    string s;
    cin >> s;

    // Convert to uppercase for ease of comparison
    for (char &c : s)
    {
        c = toupper(c);
    }

    string target = "GAMMAL";
    int n = s.size();
    int minOps = n; // Maximum operations can be the length of the string
    
    for (int i = 0; i <= n - 6; ++i)
    {
        int ops = 0;
        for (int j = 0; j < 6; ++j)
        {
            if (s[i + j] != target[j])
            {
                ops++;
            }
        }
        minOps = min(minOps, ops);
    }
    cout << minOps << endl;

    cout << "\n\n";

    return 0;
}
