
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

int countEarlySubmissions(const string &s)
{
    int count = 0;
    for (char c : s)
    {
        if (c == 'E')
        {
            count++;
        }
    }
    return count;
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
        cout << countEarlySubmissions(S) << endl;
    }

    cout << "\n\n";

    return 0;
}
