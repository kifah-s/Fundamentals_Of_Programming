#include <iostream>

using namespace std;

//* Enums

enum enPrimeOrNot
{
    prime = 1,
    notPrime = 2
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

    cout << "Please enter a number: ";
    cin >> num;

    return num;
}

enPrimeOrNot CheckNumberFun(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return enPrimeOrNot::notPrime;
        }
    }

    return enPrimeOrNot::prime;
}

void PrintResultFun(int num)
{
    if (CheckNumberFun(num) == enPrimeOrNot::notPrime)
    {
        cout << "\n"
             << num << " is not prime." << endl;
    }
    else
    {
        cout << "\n"
             << num << " is prime." << endl;
    }
}

//* End Functions

int main()
{
    WelcomeMessageFun();
    PrintResultFun(ReadNumberFun());

    cout << endl
         << endl;

    return 0;
}