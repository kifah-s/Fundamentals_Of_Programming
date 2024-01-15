

/* >>> Example 1 <<< */

#include <iostream>

using namespace std;

int main()
{
    int a, i;

    cin >> a;

    while (a)
    {
        if (a <= 2)
        {
            if (a == 2)
            {
                cout << a << endl;
            }
            break;
        }

        int b = a / 2;

        if (b * 2 != a)
        {
            for (i = 2; i * i <= a; i++)
            {
                if (a % i == 0)
                {
                    break;
                }
            }
            if (i * i > a)
            {
                cout << a << endl;
            }
        }
        a--;
    }

    return 0;
}
