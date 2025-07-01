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

int ReverseNumber(int num)
{
    int remainder = 0, revNum = 0;

    while (num > 0)
    {
        remainder = num % 10;
        revNum = (revNum * 10) + remainder;
        num = num / 10;
    }

    return revNum;
}

void PrintReverseNumber(int revNum)
{
    cout << "\nReverse Number: " << revNum << endl;
}

int main()
{
    WelcomeMessage();
    PrintReverseNumber(ReverseNumber(ReadPositiveNumber("Please, enter a positive number: ")));

    cout << endl
         << endl;

    return 0;
}