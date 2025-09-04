#include <iostream>
#include <string>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

char ReadCharacter()
{
    char myChar = 'A';
    cout << "Please, enter your char: ";
    cin >> myChar;

    return myChar;
}

char InvertCharacter(char myChar)
{
    return (isupper(myChar) ? tolower(myChar) : toupper(myChar));
}

int main()
{
    WelcomeMessage();

    char myCharacter = ReadCharacter();

    myCharacter = InvertCharacter(myCharacter);
    cout << "\nChar after inverting case: " << myCharacter << endl;

    cout << endl
         << endl;

    return 0;
}