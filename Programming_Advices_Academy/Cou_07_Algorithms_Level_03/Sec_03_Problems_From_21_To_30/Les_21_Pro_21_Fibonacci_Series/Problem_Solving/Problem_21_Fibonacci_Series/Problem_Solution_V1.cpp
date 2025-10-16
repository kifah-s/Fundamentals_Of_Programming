#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

short ReadNumber()
{
    int num = 0;

    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

int FibonacciSeries()
{
    int arr[10];
    arr[0] = 0;
    arr[1] = 1;

    for (short i = 2; i <= 10; i++)
    {
        int priv1 = arr[i - 1];
        int priv2 = arr[i - 2];
        arr[i] = priv1 + priv2;
    }

    return arr[10];
}

int main()
{
    WelcomeMessage();

    int fibSeries = FibonacciSeries();
    cout << "Fibonacci Series of 10 is: " << fibSeries << endl;

    cout << endl
         << endl;

    return 0;
}