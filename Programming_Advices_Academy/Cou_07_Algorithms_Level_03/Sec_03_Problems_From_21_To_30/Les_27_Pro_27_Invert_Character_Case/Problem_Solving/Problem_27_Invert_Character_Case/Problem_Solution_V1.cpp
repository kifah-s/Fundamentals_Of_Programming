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
    if (myChar >= 65 && myChar <= 90)
    {
        // myChar = myChar + 32;
        myChar = tolower(myChar);
    }
    else if (myChar >= 97 && myChar <= 122)
    {
        // myChar = myChar - 32;
        myChar = toupper(myChar);
    }

    return myChar;
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