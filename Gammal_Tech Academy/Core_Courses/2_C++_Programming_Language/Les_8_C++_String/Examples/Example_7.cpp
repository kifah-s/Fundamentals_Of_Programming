

/* >>> Example 7 <<< */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> x;

    x.push_back("Gammal Tech");
    x.push_back("www.gammal.tech");
    x.push_back("C++ Programming");
    x.push_back("Gammal Tech");

    sort(x.begin(), x.end());

    cout << x.size() << endl;

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << endl;
    }

    return 0;
}