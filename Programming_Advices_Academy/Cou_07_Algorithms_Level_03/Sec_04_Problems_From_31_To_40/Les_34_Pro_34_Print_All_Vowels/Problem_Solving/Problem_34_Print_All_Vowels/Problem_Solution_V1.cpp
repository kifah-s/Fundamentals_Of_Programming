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

bool IsVowel(char myChar)
{
    myChar = tolower(myChar);

    return (myChar == 'a' || myChar == 'e' || myChar == 'i' || myChar == 'o' || myChar == 'u');
}

void PrintAllVowels(string myString)
{

    for (short i = 0; i < myString.length(); i++)
    {
        if (IsVowel(myString[i]))
        {
            cout << myString[i] << "    ";
        }
    }
}

int main()
{
    WelcomeMessage();

    string myString = ReadString();

    cout << "\nVowels In String Are: ";
    PrintAllVowels(myString);

    cout << endl
         << endl;

    return 0;
}