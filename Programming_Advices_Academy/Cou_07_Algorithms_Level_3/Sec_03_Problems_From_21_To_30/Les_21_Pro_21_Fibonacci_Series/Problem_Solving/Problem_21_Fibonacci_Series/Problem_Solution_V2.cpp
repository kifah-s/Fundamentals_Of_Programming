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

void PrintFibonacciUsingLoop(short number)
{
    int febNumber = 0;
    int prev2 = 0, prev1 = 1;

    cout << "1\t";

    for (short i = 2; i <= number; ++i)
    {
        febNumber = prev1 + prev2;
        cout << febNumber << "\t";
        prev2 = prev1;
        prev1 = febNumber;
    }
}

int main()
{
    WelcomeMessage();

    PrintFibonacciUsingLoop(10);

    cout << endl
         << endl;

    return 0;
}