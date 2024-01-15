

/* >>> Example 1 <<< */

// www.gammal.tech
#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

map<string, string> m;

void add()
{
    string s1, s2;

    cout << "Enter name followed by Symbol: ";
    cin >> s1 >> s2;
    m[s1] = s2;
}

void draw()
{
    vector<int> n;
    vector<string> s;
    string s1;
    int n1 = 1;

    cout << "What would you like to draw? ";

    while (n1)
    {
        cin >> n1 >> s1;

        n.push_back(n1);
        s.push_back(s1);
    }

    cout << endl
         << endl;

    for (int i = 0; i < n.size(); i++)
    {
        for (int j = 0; j < n[i]; j++)
        {
            cout << m[s[i]];
        }
    }

    cout << endl
         << endl;
}

int main()
{
    m["space"] = " ";
    m["line"] = "";
    m["line"] += char(10);

    while (1)
    {
        cout << "What would you like to do?" << endl;
        cout << "1. Add Symbols" << endl;
        cout << "2. Draw" << endl;
        cout << "3. Exit" << endl;

        int ans;
        cin >> ans;

        if (ans == 1)
            add();
        else if (ans == 2)
            draw();
        else
            return 0;
    }
}
