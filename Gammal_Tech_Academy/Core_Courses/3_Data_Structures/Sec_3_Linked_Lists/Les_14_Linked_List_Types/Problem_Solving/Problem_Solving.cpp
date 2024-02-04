
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <ctime>
#include <vector>

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

    int N;
    cin >> N;

    vector<pair<int, int>> nodes(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> nodes[i].first >> nodes[i].second;
    }

    int sum = 0, currentIndex = 0;

    while (true)
    {
        sum += nodes[currentIndex].first;
        
        if (nodes[currentIndex].second == currentIndex)
        {
            break;
        }

        currentIndex = nodes[currentIndex].second;
    }

    cout << sum << endl;

    cout << endl;

    return 0;
}
