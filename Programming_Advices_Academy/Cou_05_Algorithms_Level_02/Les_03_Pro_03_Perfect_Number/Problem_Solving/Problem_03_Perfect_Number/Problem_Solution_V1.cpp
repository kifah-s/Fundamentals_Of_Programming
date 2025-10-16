#include <iostream>

using namespace std;

enum enPerfectOrNot
{
    perfect = 1,
    notPerfect = 2
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

int SumAllDivisors(int num)
{
    int sumDiv = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sumDiv += i;
        }
    }

    return sumDiv;
}

enPerfectOrNot CheckNumber(int num, int sumDiv)
{
    if (num == sumDiv)
    {
        return enPerfectOrNot::perfect;
    }
    else
    {
        return enPerfectOrNot::notPerfect;
    }
}

void PrintResult()
{
    int num = ReadNumber();
    int sumDiv = SumAllDivisors(num);

    if (CheckNumber(num, sumDiv) == enPerfectOrNot::perfect)
    {
        cout << "\n"
             << num << " is perfect." << endl;
    }
    else
    {
        cout << "\n"
             << num << " is not perfect." << endl;
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