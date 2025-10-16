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

    int x, *p;

    // Wrong!
    // p is an address but x is not
    // p = x;

    // Correct!
    // p is an address and so is &x
    // p = &x;

    // Wrong!
    // &x is an address
    // *p is the value stored in &x
    // *p = &x;

    // Correct!
    // *p is the value and so x
    // *p = x;

    cout << endl
         << endl;

    return 0;
}