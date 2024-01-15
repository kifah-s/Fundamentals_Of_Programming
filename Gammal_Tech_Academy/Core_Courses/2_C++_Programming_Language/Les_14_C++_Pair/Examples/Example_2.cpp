

/* >>> Example 1 <<< */

#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main()
{
    pair<string, int> x;

    x.first = "Gammal Tech";
    x.second = 123456789;
    
    cout << x.first << endl;
    cout << x.second << endl;

    return 0;
}
