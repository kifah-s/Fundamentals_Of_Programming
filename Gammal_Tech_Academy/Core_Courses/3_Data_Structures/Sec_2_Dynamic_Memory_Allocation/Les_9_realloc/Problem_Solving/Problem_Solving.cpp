
//*  Problem Solving ..

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Problem Solving ..\n"
         << endl;
}

//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

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

    cout << endl
         << endl;

    return 0;
}
