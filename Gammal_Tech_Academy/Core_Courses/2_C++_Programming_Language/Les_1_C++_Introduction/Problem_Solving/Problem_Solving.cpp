
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <ctime>

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
    bool isGood = true;
    for (int i = 0; i < s.length() - 1; ++i)
    {
        if (s[i] >= s[i + 1])
        {
            isGood = false;
            break;
        }
    }
    if (isGood)
    {
        cout << "GOOD" << endl;
    }
    else
    {
        cout << "BAD" << endl;
    }

    cout << "\n\n";

    return 0;
}
