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

    cout << "Please enter a number: ";
    cin >> num;

    return num;
}

bool CheckNumberFun(int num)
{
    bool prime = true;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }

    return prime;
}

void PrintResultFun(int num)
{
    if (CheckNumberFun(num))
    {
        cout << "\n"
             << num << " is prime." << endl;
    }
    else
    {
        cout << "\n"
             << num << " is not prime." << endl;
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