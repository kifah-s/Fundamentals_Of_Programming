

/* >>> Example 4 <<< */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> x = {72, 101, 108, 108, 111, 32, 107, 105, 102, 97, 104}; // any number

int n;

int main()
{
    if (n == x.size())
    {
        return 0;
    }
    cout << (char)x[n++];
    main();

    return 0;
}
