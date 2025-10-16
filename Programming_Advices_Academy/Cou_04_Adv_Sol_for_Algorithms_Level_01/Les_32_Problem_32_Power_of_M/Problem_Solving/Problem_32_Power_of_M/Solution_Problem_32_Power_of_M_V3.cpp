#include <iostream>
#include <cmath>

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

void PrintNumberOfPowerFun(int Pow, int Num)
{
    int result = pow(Num, Pow);
    cout << Num << "^" << Pow << ": " << result << endl;
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