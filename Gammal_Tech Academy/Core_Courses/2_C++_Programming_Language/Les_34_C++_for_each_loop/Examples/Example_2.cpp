

/* >>> Example 2 <<< */


#include <iostream>
#include <algorithm>

using namespace std;

void print(int x)
{
    cout << x << " ";
}

int main()
{
    int a[5] = {6, 3, 12, 10, 9};

    for_each(a, a + 5, print);

    return 0;
}
//* Output : 6 3 12 10 9