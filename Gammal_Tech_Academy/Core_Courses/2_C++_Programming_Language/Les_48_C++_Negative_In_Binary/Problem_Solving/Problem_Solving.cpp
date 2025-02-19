
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

bool isHackerPattern(const string &s)
{
    int n = s.length();
    if (n % 2 != 0)
        return false;
    int mid = n / 2;
    for (int i = 1; i < mid; i++)
    {
        if (!(isalpha(s[i - 1]) && isalpha(s[i]) && s[i - 1] < s[i]))
            return false;
    }
    for (int i = mid + 1; i < n; i++)
    {
        if (!(isdigit(s[i - 1]) && isdigit(s[i]) && s[i - 1] > s[i]))
            return false;
    }
    return true;
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
        cout << (isHackerPattern(S) ? "YES" : "NO") << endl;
    }

    cout << "\n\n";

    return 0;
}
