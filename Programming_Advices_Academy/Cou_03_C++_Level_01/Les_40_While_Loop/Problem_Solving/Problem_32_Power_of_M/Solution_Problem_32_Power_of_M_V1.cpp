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

int getPowerFun()
{
    int pow = 0;
    cout << "Please, enter a power: ";
    cin >> pow;

    return pow;
}

int calculateResultFun(int num, int pow)
{
    int res = 1;

    // for (int i = 0; i < pow; i++)
    // {
    //     res = res * num;
    // }

    int i = 0;
    while (i < pow)
    {
        res = res * num;
        i++;
    }

    return res;
}

//* End Functions

int main()
{
    int number = 0, power = 0, result = 0;

    welcomeMessageFun();
    number = getNumberFun();
    power = getPowerFun();
    result = calculateResultFun(number, power);

    cout << number << "^" << power << ": " << result;

    cout << endl
         << endl;

    return 0;
}