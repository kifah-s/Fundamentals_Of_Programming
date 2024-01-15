

/* >>> Example 1 <<< */

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, string> d;

    d["hillo"] = "Hello";
    d["helo"] = "Hello";
    d["helllo"] = "Hello";

    string in;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter word: ";
        cin >> in;

        if (d.find(in) != d.end())
        {
            cout << d[in] << endl;
        }
        else
        {
            cout << in << endl;
        }
    }

    return 0;
}
