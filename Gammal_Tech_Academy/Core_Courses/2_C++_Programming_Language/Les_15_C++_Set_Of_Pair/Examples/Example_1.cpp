

/* >>> Example 1 <<< */

#include <iostream>
#include <string>
#include <utility>
#include <set>

using namespace std;

int main()
{
    set<pair<string, int>> s;
    pair<string, int> p;

    p.first = "Gammal Tech";
    p.second = 123;
    s.insert(p);

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name: ";
        cin >> p.first;
        cout << "Enter number: ";
        cin >> p.second;
        s.insert(p);
    }

    set<pair<string, int>>::iterator it;

    for (it = s.begin(); it != s.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;

    return 0;
}
