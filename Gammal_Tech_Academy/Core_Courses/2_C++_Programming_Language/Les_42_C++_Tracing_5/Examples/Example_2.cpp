

/* >>> Example 2 <<< */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // any number
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
