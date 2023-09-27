

/* >>> Example 5 <<< */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "*****";
    int n;

    cout << "Please enter a number: ";
    cin >> n;

    cout << s.substr(n) << endl;

    return 0;
}
