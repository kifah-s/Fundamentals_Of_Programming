
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

    int N, M;
    cin >> N >> M;

    vector<string> workPlace(N, "Office");
    
    for (int i = 0; i < M; ++i)
    {
        int A, B;
        char C;
        cin >> A >> B >> C;
        if (C == 'P')
        {
            workPlace[A - 1] = "Remote";
            workPlace[B - 1] = "Remote";
        }
    }
    for (const auto &status : workPlace)
    {
        cout << status << endl;
    }

    cout << "\n\n";

    return 0;
}
