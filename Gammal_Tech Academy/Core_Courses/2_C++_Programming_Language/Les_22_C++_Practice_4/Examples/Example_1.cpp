

/* >>> Example 1 <<< */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> x{10, 15, 13, 6, 4, 3, 5};
    vector<int> y{2, 4, 6, 8, 20, 16, 9};
    
loop:

    int z, found = 0;

    cout << "Enter a number: ";
    cin >> z;

    for (int i = 0; i < x.size() && found == 0; i++)
    {
        for (int j = 0; j < y.size() && found == 0; j++)
        {
            if (x[i] + y[j] == z)
            {
                cout << "Yes\n";
                cout << x[i] << " " << y[j] << endl;
                found = 1;
            }
        }
    }

    cout << (found ? "" : "No\n");

    goto loop;

    return 0;
}
