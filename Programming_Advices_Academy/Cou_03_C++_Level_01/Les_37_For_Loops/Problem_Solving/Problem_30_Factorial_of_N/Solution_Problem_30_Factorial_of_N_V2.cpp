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

int calculateFactorialFun(int num)
{
    int fac = 1;

    for (int i = num; i >= 1; i--)
    {
        fac *= i;
    }

    return fac;
}
//* End Functions

int main()
{
    int number = 0, factorial = 0;

    welcomeMessageFun();

    number = getNumberFun();
    factorial = calculateFactorialFun(number);
    cout << "Factorial: " << factorial << endl;

    cout << endl
         << endl;

    return 0;
}