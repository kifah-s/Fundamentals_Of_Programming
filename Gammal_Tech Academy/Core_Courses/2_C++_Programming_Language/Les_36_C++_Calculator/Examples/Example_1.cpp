

/* >>> Example 1 <<< */

#include <iostream>

using namespace std;

int main()
{
    float x, y;
    char c;

    while (1)
    {
        cin >> x >> c >> y;
        
        if (c == '+')
            cout << x + y << endl;
        else if (c == '-')
            cout << x - y << endl;
        else if (c == '*')
            cout << x * y << endl;
        else if (c == '/')
            cout << x / y << endl;
    }

    return 0;
}
