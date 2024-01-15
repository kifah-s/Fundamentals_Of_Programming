

/* >>> Example 1 <<< */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (1)
    {
        string s;
        int n, y = 1;
        
        cout << "Please enter a number: ";
        cin >> n;
        
        int x = n;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = x - 1; j > 0; --j)
            {
                cout << " ";
            }
            for (int k = 1; k <= y; k++)
            {
                cout << "*";
            }
            --x;
            y += 2;
            cout << "\n";
        }
    }

    return 0;
}
