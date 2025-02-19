
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
//* End Functions ..

int main()
{
    problemSolvingFun();

    int N;
    string virusSignature;

    cin >> N;
    cin >> virusSignature;

    int unusualOperations = 0;

    for (int i = 0; i < N; ++i)
    {
        string operation;
        cin >> operation;
        if (operation.find(virusSignature) != string::npos)
        {
            unusualOperations++;
        }
    }

    cout << unusualOperations << endl;

    cout << "\n\n";

    return 0;
}
