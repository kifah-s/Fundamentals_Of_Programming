
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <string>

using namespace std;

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

string transformString(string s)
{
    string result = "";

    // Duplication Check: Remove consecutive duplicates
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 || s[i] != s[i - 1])
        {
            result += s[i];
        }
    }

    // Shift Operation
    for (int i = 0; i < result.length(); i++)
    {
        if (isalnum(result[i]))
        {
            result[i] = result[i] + (i + 1);
        }
    }

    // Resilience Check
    if (result.length() < s.length())
    {
        result += "GAMMAL";
    }
    return result;
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        cout << transformString(S) << endl;
    }

    cout << "\n\n";

    return 0;
}
