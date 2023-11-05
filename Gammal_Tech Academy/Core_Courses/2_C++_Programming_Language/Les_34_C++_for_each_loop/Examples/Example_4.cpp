

/* >>> Example 4 <<< */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(int x)
{
    cout << x << " ";
}

int main()
{
    vector<int> a = {6, 3, 12, 10, 9};

    for_each(a.begin(), a.end(), print);

    return 0;
}
//* Output : 6 3 12 10 9