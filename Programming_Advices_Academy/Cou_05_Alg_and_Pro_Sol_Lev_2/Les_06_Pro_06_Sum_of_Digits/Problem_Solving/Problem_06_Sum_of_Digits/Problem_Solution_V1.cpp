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

int SumOfDigits(int num)
{
    int remainder = 0, sumOfDigits = 0;

    while (num != 0)
    {
        remainder = num % 10;
        sumOfDigits += remainder;
        num = num / 10;
    }

    return sumOfDigits;
}

void PrintResult(int sumOfDigits)
{
    cout << "\nSum Of Digits: " << sumOfDigits << endl;
}

int main()
{
    WelcomeMessage();
    PrintResult(SumOfDigits(ReadNumber()));

    cout << endl
         << endl;

    return 0;
}