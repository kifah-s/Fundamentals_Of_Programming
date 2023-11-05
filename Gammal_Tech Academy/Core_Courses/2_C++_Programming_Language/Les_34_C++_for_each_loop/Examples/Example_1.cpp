

/* >>> Example 1 <<< */

#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

void print(string x)
{
    cout << x << endl;
}

int main()
{
    set<string> a = {"www", "gammal", "tech"};

    for_each(a.begin(), a.end(), print);

    return 0;
}
