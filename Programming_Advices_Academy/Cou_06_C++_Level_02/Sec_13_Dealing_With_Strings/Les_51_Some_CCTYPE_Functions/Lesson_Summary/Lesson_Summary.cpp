#include <iostream>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    char x;
    char w;

    x = toupper('a');
    w = tolower('A');

    cout << "converting a to A: " << x << endl;
    cout << "converting A to a: " << w << endl;

    //* Digits (A to Z).
    //* Returns zero if not, and non zero of yes.
    cout << "isupper('A') " << isupper('A') << endl;
    cout << "isupper('a') " << isupper('a') << endl;

    //* Lower case (a to z).
    //* Returns zero if not, and non zero of yes.
    cout << "islower('A') " << islower('A') << endl;
    cout << "islower('a') " << islower('a') << endl;

    //* Digits (0 to 9).
    //* Returns zero if not, and non zero of yes.
    cout << "isdigit('9') " << isdigit('9') << endl;
    cout << "isdigit('a') " << isdigit('a') << endl;

    //* Punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~.
    //* Returns zero if not, and non zero of yes.
    cout << "ispunct(';') " << ispunct(';') << endl;
    cout << "ispunct('A') " << ispunct('A') << endl;

    cout << endl
         << endl;

    return 0;
}