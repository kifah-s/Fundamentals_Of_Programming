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

int calculateResultFun()
{
    int num = getNumberFun();
    int pow = getPowerFun();

    int res = 1;
    for (int i = 0; i < pow; i++)
    {
        res = res * num;
    }

    return res;
}

//* End Functions

int main()
{
    int result = 0;

    welcomeMessageFun();

    result = calculateResultFun();

    cout << "Result: " << result << endl;

    cout << endl
         << endl;

    return 0;
}