

/* >>> Example 1 <<< */

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<string> x;

    x.insert("Gammal Tech");
    x.insert("www.gammal.tech");
    x.insert("C++ Programming");
    x.insert("Gammal Tech");

    cout << x.size() << endl;

    set<string>::iterator it;

    for (it = x.begin(); it != x.end(); it++)
    {
        cout << (*it) << endl;
    }

    /* for (auto ele : x)
    {
        cout << ele << endl;
    } */

    return 0;
}
