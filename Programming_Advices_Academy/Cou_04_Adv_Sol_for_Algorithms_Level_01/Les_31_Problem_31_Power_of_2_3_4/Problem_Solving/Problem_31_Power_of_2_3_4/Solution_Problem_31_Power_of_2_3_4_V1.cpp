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

void PrintResultFun(int num)
{
    cout << num << "^2: " << pow(num, 2) << endl;
    cout << num << "^3: " << pow(num, 3) << endl;
    cout << num << "^4: " << pow(num, 4) << endl;
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