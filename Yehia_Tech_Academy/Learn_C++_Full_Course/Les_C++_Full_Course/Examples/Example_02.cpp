#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    //* Pointers.

    // char x0 = 'H';
    // char x1 = 'e';
    // char x2 = 'l';
    // char x3 = 'l';
    // char x4 = 'o';

    // cout << x0 << x1 << x2 << x3 << x4 << endl;

    //* ------------------------------------------------

    char *word = new char[6];

    word[0] = 'H';
    word[1] = 'e';
    word[2] = 'l';
    word[3] = 'l';
    word[4] = 'o';
    word[5] = '\0';

    // cout << *word << endl;
    cout << word << endl;

    delete[] word;

    //* ------------------------------------------------

    // string word = "Hello";

    // cout << word << endl;

    cout << endl
         << endl;

    return 0;
}