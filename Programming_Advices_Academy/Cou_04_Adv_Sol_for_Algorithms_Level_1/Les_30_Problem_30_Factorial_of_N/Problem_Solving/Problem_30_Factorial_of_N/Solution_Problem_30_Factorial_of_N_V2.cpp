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
    cout << "Please, enter number: ";
    cin >> num;

    return num;
}

int CalculateFactorialFun(int num)
{
    int fac = 1;
    for (int i = num; i >= 1; i--)
    {
        fac *= i;
    }
    
    return fac;
}

void PrintResultFun(int fac)
{
    cout << "Factorial: " << fac << endl;
}

//* End Functions

int main()
{
    WelcomeMessageFun();

    PrintResultFun(CalculateFactorialFun(ReadNumberFun()));

    cout << endl
         << endl;

    return 0;
}