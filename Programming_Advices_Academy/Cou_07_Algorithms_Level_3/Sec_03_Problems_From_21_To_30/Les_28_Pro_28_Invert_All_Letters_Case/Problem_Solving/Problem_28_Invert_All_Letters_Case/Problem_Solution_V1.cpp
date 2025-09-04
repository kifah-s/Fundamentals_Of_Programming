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
    string str = "";
    cout << "Please, enter your string: ";
    getline(cin, str);

    return str;
}

char InvertCharacter(char myChar)
{
    return isupper(myChar) ? tolower(myChar) : toupper(myChar);
}

string ConvertAllLetters(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = InvertCharacter(str[i]);
    }

    return str;
}

int main()
{
    WelcomeMessage();

    string myString = ReadString();
    myString = ConvertAllLetters(myString);
    cout << "\nString After Convert All Letters Case: " << myString << endl;

    cout << endl
         << endl;

    return 0;
}