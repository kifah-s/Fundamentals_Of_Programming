#include <iostream>
using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void PrintNumbers(int n, int m)
{
    if (n <= m)
    {
        cout << n << endl;
        PrintNumbers(n + 1, m);
    }
}

int main()
{
    WelcomeMessage();
    PrintNumbers(1, 10);

    cout << endl
         << endl;

    return 0;
}