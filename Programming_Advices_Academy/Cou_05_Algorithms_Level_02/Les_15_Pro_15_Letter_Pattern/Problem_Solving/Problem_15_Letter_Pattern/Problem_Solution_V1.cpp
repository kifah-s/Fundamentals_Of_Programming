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

void PrintLetterPattern(int num)
{
    for (int i = 64; i <= (num + 64); i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout <<(char) i;
        }

        cout << endl;
    }
}

int main()
{
    WelcomeMessage();

    PrintLetterPattern(ReadPositiveNumber("Please, enter a positive number: "));

    cout << endl
         << endl;

    return 0;
}