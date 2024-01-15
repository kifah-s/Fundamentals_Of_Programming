

/* >>> Example 1 <<< */

#include <iostream>
#include <set>
#include <utility>

using namespace std;

int main()
{
    set<pair<int, string>> s;
    set<pair<int, string>>::iterator it;

    s.insert(pair<int, string>(123, "Gammal"));
    s.insert(pair<int, string>(567, "Tech"));
    s.insert(pair<int, string>(111, "www."));

    for (it = s.begin(); it != s.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;

    return 0;
}
