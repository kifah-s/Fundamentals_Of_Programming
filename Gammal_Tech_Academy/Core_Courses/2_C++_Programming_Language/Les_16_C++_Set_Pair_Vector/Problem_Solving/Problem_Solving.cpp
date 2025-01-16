
//* >>>>> Problem Solving <<<<< */

#include <iostream>
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

    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }
    int hubs = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'W')
            {
                bool needsHub = true;
                // Check adjacent cells for a hub
                if (i > 0 && grid[i - 1][j] == 'T')
                    needsHub = false;
                if (j > 0 && grid[i][j - 1] == 'T')
                    needsHub = false;
                if (i < n - 1 && grid[i + 1][j] == 'T')
                    needsHub = false;
                if (j < m - 1 && grid[i][j + 1] == 'T')
                    needsHub = false;
                // Place a hub if needed
                if (needsHub)
                {
                    hubs++;
                    grid[i][j] = 'T';
                }
            }
        }
    }
    cout << hubs << endl;

    cout << "\n\n";

    return 0;
}
