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

enPerfectOrNot IsPerfectOrNot(int num)
{
    if (num == SumAllDivisors(num))
    {
        return enPerfectOrNot::perfect;
    }
    else
    {
        return enPerfectOrNot::notPerfect;
    }
}

void PrintResult(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (IsPerfectOrNot(i) == enPerfectOrNot::perfect)
        {
            cout << "\n"
                 << i << " is perfect." << endl;
        }
        else
        {
            cout << "\n"
                 << i << " is not perfect." << endl;
        }
    }
}

int main()
{
    WelcomeMessage();

    PrintResult(ReadNumber());

    cout << endl
         << endl;

    return 0;
}