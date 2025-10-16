#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void PrintFibonacciUsingRecursion(short number, int prev1, int prev2)
{
    int febNumber = 0;

    if (number > 0)
    {
        febNumber = prev2 + prev1;
        prev2 = prev1;
        prev1 = febNumber;
        cout << febNumber << "\t";
        PrintFibonacciUsingRecursion(number - 1, prev1, prev2);
    }
}

int main()
{
    WelcomeMessage();

    PrintFibonacciUsingRecursion(10, 0, 1);

    cout << endl
         << endl;

    return 0;
}