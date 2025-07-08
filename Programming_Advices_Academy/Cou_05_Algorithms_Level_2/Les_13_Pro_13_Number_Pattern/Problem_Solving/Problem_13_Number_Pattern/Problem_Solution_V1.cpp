#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int ReadPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

void PrintNumberPattern(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }

        cout << endl;
    }
}

int main()
{
    WelcomeMessage();

    PrintNumberPattern(ReadPositiveNumber("Please, enter a positive number: "));

    cout << endl
         << endl;

    return 0;
}