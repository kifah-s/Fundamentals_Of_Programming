#include <iostream>
using namespace std;

//* Functions Declaration.
void WelcomeMessage();
// void Add(int a, int b);
void Add(int, int);

int main()
{
    WelcomeMessage();
    Add(5, 10);

    cout << endl
         << endl;

    return 0;
}

//* Functions Definition.
void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void Add(int a, int b)
{
    cout << a + b;
}