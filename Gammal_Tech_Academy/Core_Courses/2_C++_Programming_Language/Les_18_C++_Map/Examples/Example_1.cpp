

/* >>> Example 1 <<< */

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> m;

    m["zyad"] = 123;
    m["omar"] = 123;
    m["Ahmed"] = 99999;

    map<string, int>::iterator x;

    for (x = m.begin(); x != m.end(); x++)
        cout << (*x).first << " " << (*x).second << endl;

    return 0;
}
