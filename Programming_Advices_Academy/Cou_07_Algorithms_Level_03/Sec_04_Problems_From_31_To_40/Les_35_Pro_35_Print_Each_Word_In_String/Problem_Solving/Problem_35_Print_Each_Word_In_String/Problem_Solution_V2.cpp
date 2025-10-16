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

void PrintEachWordInString(string myString)
{
    string word = "";

    for (short i = 0; i < myString.length(); i++)
    {
        if (myString[i] != ' ')
        {
            word += myString[i];
        }
        else
        {
            if (!word.empty())
            {
                cout << word << endl;
                word.clear();
            }
        }
    }

    if (!word.empty())
    {
        cout << word << endl;
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