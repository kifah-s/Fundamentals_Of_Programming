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

string UpperLetters(string myString)
{
    bool isFirstLetter = true;

    for (int i = 0; i < myString.length(); i++)
    {
        myString[i] = toupper(myString[i]);
    }

    return myString;
}

string LowerLetters(string myString)
{
    bool isFirstLetter = true;

    for (int i = 0; i < myString.length(); i++)
    {
        myString[i] = tolower(myString[i]);
    }

    return myString;
}

int main()
{
    WelcomeMessage();

    string myString = ReadString();

    myString = UpperLetters(myString);
    cout << "\nString After Upper: " << myString << endl;

    myString = LowerLetters(myString);
    cout << "String After Lower: " << myString << endl;

    cout << endl
         << endl;

    return 0;
}