#include <iostream>

using namespace std;

//* Enums

enum enEvenOrOdd
{
    even = 1,
    odd = 2
};

//* End Enums

//* Functions

void WelcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int ReadNumberFun()
{
    int num = 0;
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

enEvenOrOdd CheckNumberFun(int num)
{
    if (num % 2 == 0)
    {
        return enEvenOrOdd::even;
    }
    else
    {
        return enEvenOrOdd::odd;
    }
}

int CalculateSumEvenNumbersFun(int num)
{
    int sumEvenNumbers = 0;

    for (int i = 0; i <= num; i++)
    {
        if (CheckNumberFun(i) == enEvenOrOdd::even)
        {
            sumEvenNumbers += i;
        }
    }

    return sumEvenNumbers;
}

void PrintSumEvenNumbersFun(int sumEven)
{
    cout << "Sum Even Numbers: " << sumEven << endl;
}

//* End Functions

int main()
{
    WelcomeMessageFun();

    PrintSumEvenNumbersFun(CalculateSumEvenNumbersFun(ReadNumberFun()));

    cout << endl
         << endl;

    return 0;
}