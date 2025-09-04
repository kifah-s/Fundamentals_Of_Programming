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

char ReadChar()
{
    char myChar = 'a';
    cout << "Please, enter a character: ";
    cin >> myChar;

    return myChar;
}

int CountCharacter(string myString, char myChar)
{
    int counter = 0;

    for (int i = 0; i < myString.length(); i++)
    {
        if (myString[i] == myChar)
        {
            counter++;
        }
    }

    return counter;
}

int CountCharacter_2(string myString, char myChar)
{
    int counter = 0;

    for (int i = 0; i < myString.length(); i++)
    {
        if (tolower(myString[i]) == myChar)
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    WelcomeMessage();

    string myString = "";
    char myChar = 'a';
    int countCharacter = 0, countCharacter_2 = 0;

    myString = ReadString();
    myChar = ReadChar();
    countCharacter = CountCharacter(myString, myChar);
    cout << "\nLetter '" << myChar << "' count: " << countCharacter << endl;
    
    countCharacter_2 = CountCharacter_2(myString, myChar);
    cout << "Letter '" << myChar << "' OR '" << (char)toupper(myChar) << "' cont: " << countCharacter_2 << endl;

    cout << endl
         << endl;

    return 0;
}