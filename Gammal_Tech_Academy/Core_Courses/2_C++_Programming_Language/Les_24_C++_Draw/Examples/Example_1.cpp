

/* >>> Example 1 <<< */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int n;

    cout << "What do you wanna do? ";
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        if (s == "star" || s == "stars")
        {
            cout << "*";
        }
        else if (s == "space" || s == "spaces")
        {
            cout << " ";
        }
        else if (s == "line")
        {
            cout << endl;
        }
    }
    cout << endl;

    return 0;
}