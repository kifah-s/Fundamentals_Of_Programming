

/* >>> Example 1 <<< */

#include <iostream>

using namespace std;

int main()
{
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    for (auto i : a)
        cout << i << " ";

    cout << endl;

    return 0;
}
