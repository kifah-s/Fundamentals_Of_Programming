

/* >>> Example 1 <<< */

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> x;

    x.insert(9);
    x.insert(1);
    x.insert(4);
    x.insert(2);
    x.insert(3);
    x.insert(9);
    x.insert(4);

    set<int>::iterator it;

    for (it = x.begin(); it != x.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    return 0;
}
