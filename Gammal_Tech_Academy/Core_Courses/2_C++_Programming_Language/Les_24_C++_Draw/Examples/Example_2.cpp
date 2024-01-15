

/* >>> Example 2 <<< */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> s;
    vector<int> n;
    string t1 = "";
    int t2;

    while (t1 != "exit")
    {
        cout << "What do you wanna do? ";
        cin >> t2 >> t1;
        s.push_back(t1);
        n.push_back(t2);
    }

    for (int q = 0; q < n.size(); q++)
    {
        for (int i = 0; i < n[q]; i++)
        {
            if (s[q] == "star" || s[q] == "stars")
            {
                cout << "*";
            }
            else if (s[q] == "space" || s[q] == "spaces")
            {
                cout << " ";
            }
            else if (s[q] == "line")
            {
                cout << endl;
            }
        }
    }

    return 0;
}
