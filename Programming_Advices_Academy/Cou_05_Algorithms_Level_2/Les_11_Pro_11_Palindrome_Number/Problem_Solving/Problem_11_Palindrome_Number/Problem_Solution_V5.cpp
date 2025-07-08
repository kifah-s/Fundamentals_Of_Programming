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
    int num_2 = 0;
    int digit = 0;

    while (num > 0)
    {
        digit = num % 10;
        num_2 = (num_2 * 10) + digit;
        num = num / 10;
    }

    return num_2;
}

bool CheckNumberPalindromeOrNot(int num)
{
    return (num == ReverseNumber(num));
}

void PrintResult()
{
    if (CheckNumberPalindromeOrNot(ReadPositiveNumber("Please, enter a positive number: ")))
    {
        cout << "\nyes is palindrome number" << endl;
    }
    else
    {
        cout << "\nno is not palindrome number" << endl;
    }
}

int main()
{
    WelcomeMessage();
    PrintResult();

    cout << endl
         << endl;

    return 0;
}