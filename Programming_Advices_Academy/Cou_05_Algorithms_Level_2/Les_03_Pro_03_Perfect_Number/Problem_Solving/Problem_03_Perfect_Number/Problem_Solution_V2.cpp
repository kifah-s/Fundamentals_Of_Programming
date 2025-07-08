#include <iostream>

using namespace std;

struct stPerfectNumber
{
    int number = 0;
    int sumDivisors = 0;
};

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

stPerfectNumber ReadNumber()
{
    stPerfectNumber perNum;

    cout << "Please, enter a number: ";
    cin >> perNum.number;

    return perNum;
}

stPerfectNumber SumAllDivisors(stPerfectNumber perNum)
{
    for (int i = 1; i <= perNum.number / 2; i++)
    {
        if (perNum.number % i == 0)
        {
            perNum.sumDivisors += i;
        }
    }

    return perNum;
}

enPerfectOrNot CheckNumber(stPerfectNumber perNum)
{
    if (perNum.number == SumAllDivisors(perNum).sumDivisors)
    {
        return enPerfectOrNot::perfect;
    }
    else
    {
        return enPerfectOrNot::notPerfect;
    }
}

void PrintResult(stPerfectNumber perNum)
{
    if (CheckNumber(perNum) == enPerfectOrNot::perfect)
    {
        cout << "\n"
             << perNum.number << " is perfect." << endl;
    }
    else
    {
        cout << "\n"
             << perNum.number << " is not perfect." << endl;
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