#include <iostream>
#include <string>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

char ReadChar()
{
    char myChar = 'a';
    cout << "Please, enter a character: ";
    cin >> myChar;

    return myChar;
}

bool IsVowel(char myChar)
{
    myChar = tolower(myChar);

    return (myChar == 'a' || myChar == 'e' || myChar == 'i' || myChar == 'o' || myChar == 'u');
}

int main()
{
    WelcomeMessage();

    char myChar;

    myChar = ReadChar();

    if (IsVowel(myChar))
    {
        cout << "\nYes Letter '" << myChar << "' Is a Vowel." << endl;
    }
    else
    {
        cout << "\nNo Letter '" << myChar << "' Is Not a Vowel." << endl;
    }

    cout << endl
         << endl;

    return 0;
}