
//* >>>>> Problem Solving <<<<< */

#include <iostream>

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

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        float speed;
        int ram, battery;
        cin >> speed >> ram >> battery;
        if (speed >= 2.5 && ram >= 8 && battery >= 5)
        {
            cout << "Gammal Tech Certified" << endl;
        }
        else
        {
            cout << "Not Certified" << endl;
        }
    }
    return 0;
}
