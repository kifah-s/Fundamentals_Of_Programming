

/* >>> Example 3 <<< */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x = ~5;
    for (int i = 31; i >= 0; i--)
    {
        if (x & (1 << i))
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }

    cout << endl;

    return 0;
}
