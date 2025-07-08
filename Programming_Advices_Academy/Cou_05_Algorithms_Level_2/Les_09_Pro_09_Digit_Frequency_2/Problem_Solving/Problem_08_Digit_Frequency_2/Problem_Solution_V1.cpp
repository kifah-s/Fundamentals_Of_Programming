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

int CountDigitFrequency(int num, int dig)
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

void PrintAllDigitFrequency(int num)
{
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        short counter = 0;

        counter = CountDigitFrequency(num, i);

        if (counter > 0)
        {
            cout << "Digit " << i << " Frequency is "
                 << counter << " Time(s).\n";
        }
    }
}

int main()
{
    WelcomeMessage();

    int number = ReadPositiveNumber("Please, enter a number: ");
    PrintAllDigitFrequency(number);

    cout << endl
         << endl;

    return 0;
}