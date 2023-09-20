

/* >>> Example 2 <<< */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x[5] = {9, 8, 7, 6, 5};
    vector<int> y;

    y.push_back(9);
    y.push_back(8);
    y.push_back(7);
    y.push_back(6);
    y.push_back(5);

    sort(x, x + 5);
    cout << "Array: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }

    sort(y.begin(), y.end());
    cout << "\nVector: \n";
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }

    return 0;
}
