

/* >>> Example 1 <<< */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cout << "Please enter a number: ";
    cin >> n;

    string stars = "*", spaces = "";

    for (int i = 0; i < n; i++)
    {
        spaces += " ";
    }
    for (int i = 0; i < n; i++)
    {
        cout << spaces.substr(i) << stars << endl;
        stars += "**";
    }

    return 0;
}
