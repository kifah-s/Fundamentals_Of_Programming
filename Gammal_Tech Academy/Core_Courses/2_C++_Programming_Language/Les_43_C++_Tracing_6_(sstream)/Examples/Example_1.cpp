

/* >>> Example 1 <<< */

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream ss("10 20 30 40 50");
    cout << ss.str() << endl;

    cout << endl;

    for (int x, i = 0; i < 5; i++)
    {
        ss >> x;
        cout << x << endl;
    }

    cout << endl;

    cout << ss.str() << endl;

    cout << endl;

    ss.clear();
    ss.str("");
    string s = "44 tout ankh amoun";
    ss << s;
    cout << ss.str() << endl;

    cout << endl;

    int x;
    ss >> x;
    cout << x << endl;

    cout << endl;

    x = 0;
    while (ss >> s)
    {
        cout << s << endl;
        x++;
    }
    cout << x << endl;

    return 0;
}
