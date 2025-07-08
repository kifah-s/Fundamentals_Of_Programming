#include <iostream>

using namespace std;

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

int CheckNumberFun(int num)
{
    if (num % 2 != 0)
    {
        return num;
    }
    else
    {
        return 0;
    }
}

int CalculateSumOddNumbersFrom1ToNFun(int num)
{
    int sumOddNumbers = 0;

    for (int i = 0; i <= num; i++)
    {
        sumOddNumbers += CheckNumberFun(i);
    }

    return sumOddNumbers;
}

void PrintSumOddNumbersFun(int num)
{
    cout << "Sum Odd Numbers: " << num << endl;
    ;
}

//* End Functions

int main()
{
    WelcomeMessageFun();

    PrintSumOddNumbersFun(CalculateSumOddNumbersFrom1ToNFun(ReadNumberFun()));

    cout << endl
         << endl;

    return 0;
}