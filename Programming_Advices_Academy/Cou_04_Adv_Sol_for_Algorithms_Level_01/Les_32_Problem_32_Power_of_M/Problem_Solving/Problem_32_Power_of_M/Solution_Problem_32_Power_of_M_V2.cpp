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

int ReadPowerFun()
{
    int pow = 0;
    cout << "Please, enter a power: ";
    cin >> pow;

    return pow;
}

int CalculateNumberOfPowerFun(int pow, int num)
{
    int numOfPow = 1;
    for (int i = 0; i < pow; i++)
    {
        numOfPow *= num;
    }

    return numOfPow;
}

void PrintNumberOfPowerFun(int pow, int num)
{
    int numOfPow = CalculateNumberOfPowerFun(pow, num);

    cout << num << "^" << pow << ": " << numOfPow << endl;
}

//* End Functions

int main()
{
    WelcomeMessageFun();

    PrintNumberOfPowerFun(ReadPowerFun(), ReadNumberFun());

    cout << endl
         << endl;

    return 0;
}