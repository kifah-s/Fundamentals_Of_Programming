#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void PrintNumberFromMDowToN(int m, int n)
{
    if (m >= n)
    {
        cout << m << endl;
        PrintNumberFromMDowToN(m - 1, n);
    }
}

int main()
{
    WelcomeMessage();
    PrintNumberFromMDowToN(10, 1);

    cout << endl
         << endl;

    return 0;
}