

/* >>> Example 1 <<< */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> y;

    y.push_back(2);
    y.push_back(4);
    y.push_back(5);
    y.push_back(1);
    y.push_back(3);

    sort(y.begin(), y.end());

    cout << "Vector: ";

    for (int i = 0; i < y.size(); i++)
        cout << y[i] << " ";
    cout << endl;

    return 0;
}
