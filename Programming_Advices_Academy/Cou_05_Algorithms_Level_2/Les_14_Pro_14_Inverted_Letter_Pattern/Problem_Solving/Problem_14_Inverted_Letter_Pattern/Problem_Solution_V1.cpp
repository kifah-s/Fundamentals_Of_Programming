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

void PrintInvertedLetterPattern(int num)
{
    for (int i = (num + 64); i >= 65; i--)
    {
        for (int j = 1; j <= (i - 64); j++)
        {
            cout << (char)i;
        }

        cout << endl;
    }
}

int main()
{
    WelcomeMessage();

    PrintInvertedLetterPattern(ReadPositiveNumber("Please, enter a positive number: "));

    cout << endl
         << endl;

    return 0;
}