

/* >>> Example 1 <<< */

#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    set<pair<string, vector<int>>> s;

    for (int i = 0; i < 2; i++)
    {
        pair<string, vector<int>> p;
        cout << "Enter name: ";
        cin >> p.first;
    more:
        int t;
        cout << "Enter number: ";
        cin >> t;
        if (t)
        {
            p.second.push_back(t);
            goto more;
        }
        s.insert(p);
    }

    set<pair<string, vector<int>>>::iterator it;

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << (*it).first << endl;

        for (int j = 0; j < (*it).second.size(); j++)
            cout << "	" << (*it).second[j] << endl;
    }

    return 0;
}
