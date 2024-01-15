

/* >>> Example 3 <<< */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x[5] = {2, 5, 3, 1, 4};

    /* reverse(x, x + 5);
    cout << "Array: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    } */

    /* sort(x, x + 5);
    cout << "Array: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    } */

    sort(x, x + 5);
    reverse(x, x + 5);
    cout << "Array: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}
