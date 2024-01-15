

/* >>> Example 2 <<< */

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, string> m;

    m[123] = "Gammal";
    m[456] = "Tech";
    m[111] = "www.";

    map<int, string>::iterator x;

    for (x = m.begin(); x != m.end(); x++)
    {
        cout << (*x).first << " ";
        cout << (*x).second << "\n";
    }

    return 0;
}
