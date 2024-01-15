

/* >>> Example 1 <<< */

#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main()
{
    pair<string, int> x[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name: ";
        cin >> x[i].first;

        cout << "Enter number: ";
        cin >> x[i].second;
    }

    for (int i = 0; i < 3; i++)
        cout << i + 1 << ")" << x[i].first << " " << x[i].second << endl;

    return 0;
}
