
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

    int N, Q;
    cin >> N >> Q;

    vector<int> healthScores(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> healthScores[i];
    }

    while (Q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x, v;
            cin >> x >> v;
            healthScores[x - 1] += v;
        }
        else if (type == 2)
        {
            long long sum = 0;
            for (int score : healthScores)
            {
                sum += score;
            }
            cout << sum << endl;
        }
    }

    cout << endl
         << endl;

    return 0;
}
