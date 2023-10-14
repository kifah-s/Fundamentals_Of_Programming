

/* >>> Example 1 <<< */

// www.gammal.tech
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> d;

bool check(string x)
{
    for (int i = 0; i < d.size(); i++)
        if (x == d[i])
            return 1;
    return 0;
}

string correct(string x)
{
    int num = 0;
    string c = "";
    for (int i = 0; i < d.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < d[i].size(); j++)
            for (int k = 0; k < x.size(); k++)
                if (d[i][j] == x[k])
                    count++;
        if (count > num)
        {
            num = count;
            c = d[i];
        }
    }
    return c;
}

int main()
{
    d.push_back("hello");
    d.push_back("hi");
    d.push_back("ok");
    string in;
    cout << "Enter a word: ";
    cin >> in;
    if (check(in))
        cout << in << endl;
    else
        cout << correct(in) << endl;
}
