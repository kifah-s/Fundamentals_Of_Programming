
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
            break;
        currentIndex = nodes[currentIndex].second;
    }
    
    cout << sum << endl;

    cout << endl
         << endl;

    return 0;
}
