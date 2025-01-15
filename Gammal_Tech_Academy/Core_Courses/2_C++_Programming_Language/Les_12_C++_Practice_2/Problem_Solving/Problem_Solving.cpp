
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

    int N, A, B;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A >> B;
        int D = A / B; // Initial guess for division factor

        // Check if increasing or decreasing D gets a closer result
        if (abs(A - D * B) > abs(A - (D + 1) * B))
        {
            D++;
        }
        else if (D != 0 && abs(A - D * B) > abs(A - (D - 1) * B))
        {
            D--;
        }
        cout << D << endl;
    }

    cout << "\n\n";

    return 0;
}
