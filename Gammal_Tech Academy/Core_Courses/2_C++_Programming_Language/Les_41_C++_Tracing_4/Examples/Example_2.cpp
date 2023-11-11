

/* >>> Example 2 <<< */

#include <iostream>

using namespace std;

int main()
{
    int x[10], y[10];

    for (int i = 0; i < 10; i++) //* Block 1.
    {
        cin >> x[i];
        y[i] = 0;
    }

    for (int i = 0; i < 10; i++) //* Block 2.
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (x[i] == x[j])
            {
                y[i]++;
            }
        }
    }

    cout << endl;

    for (int i = 0; i < 10; i++) //* Block 3.
    {
        cout << x[i] << " " << y[i] << endl;
    }

    return 0;
}

//* Output :
//* x = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
//* y = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0];

//* x = [1, 2, 3, 1, 2, 3, 3, 2, 1, 1];
//* y = [3, 2, 2, 2, 1, 1, 0, 0, 1, 0];
