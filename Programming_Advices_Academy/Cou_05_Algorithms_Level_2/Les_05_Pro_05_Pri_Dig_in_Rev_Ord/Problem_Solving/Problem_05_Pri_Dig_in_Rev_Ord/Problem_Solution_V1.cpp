#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int ReadNumber()
{
    int num = 0;

    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

void PrintDigitsInReversedOrder(int num)
{
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;
        cout << digit << endl;
        num = num / 10;
    }
}

int main()
{
    WelcomeMessage();
    PrintDigitsInReversedOrder(ReadNumber());

    cout << endl
         << endl;

    return 0;
}