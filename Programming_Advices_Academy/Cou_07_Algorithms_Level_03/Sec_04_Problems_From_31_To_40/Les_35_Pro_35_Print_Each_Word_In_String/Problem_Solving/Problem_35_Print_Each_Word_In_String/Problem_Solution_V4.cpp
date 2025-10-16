#include <iostream>
#include <string>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string ReadString()
{
    string myString = "";

    cout << "Please, enter your string: ";
    getline(cin, myString);

    return myString;
}

void PrintEachWordInString(string S1)
{
    string delim = " ";
    string sWord;
    short pos = 0;

    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);

        if (sWord != "")
        {
            cout << sWord << endl;
        }

        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
    {
        cout << S1 << endl;
    }
}

int main()
{
    WelcomeMessage();

    string myString = ReadString();

    cout << "\nYour String Words Are: " << endl;
    PrintEachWordInString(myString);

    cout << endl
         << endl;

    return 0;
}