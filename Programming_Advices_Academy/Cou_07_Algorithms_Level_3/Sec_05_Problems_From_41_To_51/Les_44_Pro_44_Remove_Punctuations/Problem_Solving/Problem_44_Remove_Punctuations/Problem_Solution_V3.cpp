#include <iostream>
#include <string>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string RemovePunctuationsFromString(string s1)
{
    string s2 = "";

    for (short i = 0; i < s1.length(); i++)
    {
        if (!ispunct(s1[i]))
        {
            s2 += s1[i];
        }
    }

    return s2;
}

int main()
{
    WelcomeMessage();

    string s1 = "Welcome to Jordan, Jordan is a nice country; it's amazing";

    cout << "\nOriginal String: " << s1 << endl;

    cout << "\nPunctuations Removed: ";
    cout << RemovePunctuationsFromString(s1) << endl;

    cout << endl
         << endl;

    return 0;
}