#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void PrintHeaderMultiplicationTable()
{
    cout << "\t\t\tMultiplication Table From 1 To 10\n"
         << endl;
    cout << "\t   1\t 2\t 3\t 4\t 5\t 6\t 7\t 8\t 9\t 10" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
}

void PrintMultiplicationTableFrom1To10()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t| ";
        for (int j = 1; j <= 10; j++)
        {
            cout << " " << i * j << "\t";
        }
        cout << endl;
    }
}

int main()
{
    WelcomeMessage();

    PrintHeaderMultiplicationTable();
    PrintMultiplicationTableFrom1To10();

    cout << endl
         << endl;

    return 0;
}