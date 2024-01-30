
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << endl
         << "Problem Solving .." << endl
         << endl;
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int N, M;
    
    cin >> N;

    int *data = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        cin >> data[i];
    }

    cin >> M;

    data = (int *)realloc(data, (N + M) * sizeof(int));

    for (int i = N; i < N + M; i++)
    {
        cin >> data[i];
    }

    cout << N + M << endl;

    for (int i = 0; i < N + M; i++)
    {
        cout << data[i] << " ";
    }

    cout << endl;

    free(data);

    cout << endl;

    return 0;
}
