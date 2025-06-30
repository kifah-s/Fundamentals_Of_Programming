#include <iostream>

using namespace std;

enum enPrimeOrNot
{
    prime = 1,
    notPrime = 2
};

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

enPrimeOrNot CheckNumberPrimeOrNot(int num)
{
    if (num < 2)
    {
        return enPrimeOrNot::notPrime;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return enPrimeOrNot::notPrime;
        }
    }

    return enPrimeOrNot::prime;
}

void PrintPrimeOrNot(int num)
{
    if (CheckNumberPrimeOrNot(num) == enPrimeOrNot::prime)
    {
        cout << num << " is Prime." << endl;
    }
    else
    {
        cout << num << " is Not Prime." << endl;
    }
}

void CheckNumbers(int num)
{
    for (int i = 1; i <= num; i++)
    {
        PrintPrimeOrNot(i);
    }
}

int main()
{
    WelcomeMessage();

    CheckNumbers(ReadNumber());

    cout << endl
         << endl;

    return 0;
}