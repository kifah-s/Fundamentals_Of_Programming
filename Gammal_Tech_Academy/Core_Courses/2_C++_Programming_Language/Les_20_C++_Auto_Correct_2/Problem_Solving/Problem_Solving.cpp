
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

int minEdits(string a, string b)
{
    int m = a.size(), n = b.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    for (int i = 0; i <= m; i++)
        dp[i][0] = i;
    for (int j = 0; j <= n; j++)
        dp[0][j] = j;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
        }
    }
    return dp[m][n];
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    cout << "\n\n";

    int n;
    cin >> n;
    vector<string> dict(n);
    for (int i = 0; i < n; i++)
        cin >> dict[i];
    string word;
    cin >> word;
    vector<pair<int, string>> candidates;
    for (const string &dword : dict)
    {
        int edits = minEdits(word, dword);
        if (edits == 0)
        {
            cout << word;
            return 0;
        }
        candidates.push_back({edits, dword});
    }
    sort(candidates.begin(), candidates.end());
    for (int i = 0; i < min(3, (int)candidates.size()); i++)
        cout << candidates[i].second << (i < 2 ? "\n" : "");

    return 0;
}
