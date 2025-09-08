#include <iostream>
#include <string>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string TrimLift(string str1)
{
    for (short i = 0; i < str1.length(); i++)
    {
        if (str1[i] != ' ')
        {
            return str1.substr(i, str1.length() - i);
        }
    }

    return "";
}

string TrimRight(string str1)
{
    for (short i = str1.length() - 1; i >= 0; i--)
    {
        if (str1[i] != ' ')
        {
            return str1.substr(0, i + 1);
        }
    }

    return "";
}

string Trim(string str1)
{
    return (TrimLift(TrimRight(str1)));
}

int main()
{
    WelcomeMessage();

    string str1 = "         kifah saloum         ";

    cout << "String: " << str1 << endl;
    cout << "Trim Lift: " << TrimLift(str1) << endl;
    cout << "Trim Right: " << TrimRight(str1) << endl;
    cout << "Trim: " << Trim(str1) << endl;

    cout << endl
         << endl;

    return 0;
}