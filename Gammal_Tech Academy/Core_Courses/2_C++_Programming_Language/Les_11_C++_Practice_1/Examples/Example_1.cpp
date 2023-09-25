

/* >>> Example 1 <<< */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (1)
    {
        int x;
        string s;

        cout << "Enter number: ";
        cin >> x;

        for (int i = 1; i <= x; i++)
        {
            s = s + "*";
            cout << s << "\n";
        }
    }

    return 0;
}
