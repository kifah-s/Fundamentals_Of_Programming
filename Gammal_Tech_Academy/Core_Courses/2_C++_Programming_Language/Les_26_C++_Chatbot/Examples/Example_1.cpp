

/* >>> Example 1 <<< */

#include <iostream>
#include <string>
#include <fstream>
#include <map>

using namespace std;

map<string, string> m;

void answer()
{
    string q;
    cin.ignore();
    getline(cin, q);
    if (m[q] != "")
    {
        cout << m[q] << endl;
    }
    else
    {
        cout << "i donnot understand question\n";
    }
}

int main()
{
    fstream gchat("gammal_chat_bot.txt");
    if (gchat.is_open())
    {
    start:
        string q, a;
        while (getline(gchat, q))
        {
            getline(gchat, a);
            m[q] = a;
        }
        gchat.close();
        cout << "what would you like to do?\n"
                "1.Add Q&A\n"
                "2.Ask a question\n"
                "3.Exit\n";
        int ans;
        cin >> ans;
        if (ans == 1)
        {
            cout << "Type the question:\n";
            cin.ignore();
            getline(cin, q);
            cout << "Type the answer\n";
            getline(cin, a);
            m[q] = a;
            gchat.open("gammal_chat_bot.txt", ios::app);
            gchat << q << endl
                  << a << endl;
            gchat.close();
        }
        else if (ans == 2)
        {
            answer();
        }
        else
        {
            return 0;
        }

        goto start;
    }
    else
    {
        cout << "Error:cannot open file\n";
    }
}
