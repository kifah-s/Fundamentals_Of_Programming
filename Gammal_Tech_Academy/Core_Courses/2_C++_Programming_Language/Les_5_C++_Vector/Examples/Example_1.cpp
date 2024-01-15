

/* >>> Example 1 <<< */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> x;
    vector<int> y;

    x.push_back(5);
    x.push_back(9);
    x.push_back(200);
    x.push_back(-3);

    x.clear();

    cout << x.size() << endl;

    return 0;
}
