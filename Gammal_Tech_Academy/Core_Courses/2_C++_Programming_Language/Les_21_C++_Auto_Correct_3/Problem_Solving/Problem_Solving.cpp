
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

// Function to calculate the edit distance between two strings
int editDistance(const string &a, const string &b)
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

    int N;
    cin >> N;
    vector<string> dictionary(N);
    for (int i = 0; i < N; i++)
    {
        cin >> dictionary[i];
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        string query;
        cin >> query;
        bool found = false;
        vector<string> suggestions;
        for (const string &word : dictionary)
        {
            if (word == query)
            {
                cout << query << endl;
                found = true;
                break;
            }
            else if (editDistance(word, query) == 1)
            {
                suggestions.push_back(word);
            }
        }
        if (!found)
        {
            if (suggestions.empty())
            {
                cout << "No suggestions" << endl;
            }
            else
            {
                for (size_t i = 0; i < suggestions.size(); i++)
                {
                    if (i > 0)
                        cout << ",";
                    cout << suggestions[i];
                }
                cout << endl;
            }
        }
    }

    cout << "\n\n";

    return 0;
}
