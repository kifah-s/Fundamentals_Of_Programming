

/* >>> Example 6 <<< */

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> m = {{"www", 200}, {"gammal", 100}, {"tech", 50}};

    for (auto i : m)
        cout << i.first << " " << i.second << endl;

    return 0;
}
