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

int DigitFrequency(int num, int dig)
{
    int remainder = 0, counter = 0;

    while (num > 0)
    {
        remainder = num % 10;

        if (dig == remainder)
        {
            counter++;
        }

        num = num / 10;
    }

    return counter;
}

void PrintResult(int dig, int num)
{
    // int num = ReadPositiveNumber("Please, enter a number: ");
    // int dig = ReadPositiveNumber("Please, enter a digit: ");

    cout << "\nDigit " << dig << " Frequency is " << DigitFrequency(num, dig) << " Time(s)." << endl;
}

int main()
{
    WelcomeMessage();
    PrintResult(ReadPositiveNumber("Please, enter a digit: "), ReadPositiveNumber("Please, enter a number: "));

    cout << endl
         << endl;

    return 0;
}