

/* >>> Example 4 <<< */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "*****";
    int n;

    cout << "Please enter a number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << s.substr(i) << endl;
    }

    return 0;
}
