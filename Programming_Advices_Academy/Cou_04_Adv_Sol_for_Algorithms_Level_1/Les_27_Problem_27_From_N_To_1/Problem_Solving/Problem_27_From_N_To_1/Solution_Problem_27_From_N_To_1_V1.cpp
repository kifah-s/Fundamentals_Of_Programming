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

void PrintNumbersFrom1ToNFun(int num)
{
    for (int i = num; i >= 1; i--)
    {
        cout << i << endl;
    }
}

//* End Functions

int main()
{
    WelcomeMessageFun();
    PrintNumbersFrom1ToNFun(ReadNumberFun());

    cout << endl
         << endl;

    return 0;
}