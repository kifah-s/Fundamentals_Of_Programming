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

void PrintFirstLetterOfString(string myString)
{
    cout << "\nFirst letter of this string: " << endl;
    cout << myString[0] << endl;

    for (int i = 0; i < myString.length(); i++)
    {
        if (myString[i] == ' ')
        {
            cout << myString[i + 1] << endl;
        }
    }
}

int main()
{
    WelcomeMessage();

    // string myString = ReadString();
    // PrintFirstLetterOfString(myString);

    PrintFirstLetterOfString(ReadString());

    cout << endl
         << endl;

    return 0;
}