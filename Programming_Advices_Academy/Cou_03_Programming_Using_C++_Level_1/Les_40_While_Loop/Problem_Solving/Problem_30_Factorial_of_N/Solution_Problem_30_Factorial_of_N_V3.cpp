#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int getNumberFun()
{
    int num = 0;

    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

int calculateFactorialFun()
{
    int num = getNumberFun();

    while (num < 1)
    {
        num = getNumberFun();
    }

    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }

    return fac;
}

//* End Functions

int main()
{
    int factorial = 0;

    welcomeMessageFun();

    factorial = calculateFactorialFun();
    cout << "Factorial: " << factorial << endl;

    cout << endl
         << endl;

    return 0;
}