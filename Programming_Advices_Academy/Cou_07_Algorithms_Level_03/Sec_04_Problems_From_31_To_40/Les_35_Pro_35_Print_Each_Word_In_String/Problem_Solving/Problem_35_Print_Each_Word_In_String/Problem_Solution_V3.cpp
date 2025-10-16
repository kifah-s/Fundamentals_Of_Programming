#include <iostream>
#include <string>
#include <sstream>

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
    stringstream ss(myString);
    string word;

    while (ss >> word)
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