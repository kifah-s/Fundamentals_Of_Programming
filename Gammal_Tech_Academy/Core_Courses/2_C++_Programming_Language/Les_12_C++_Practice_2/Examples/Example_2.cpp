

/* >>> Example 2 <<< */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Please enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}