#include <iostream>

using namespace std;

//* Functions

void WelcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float ReadNumberFun(string message)
{
    float num = 0;

    cout << message;
    cin >> num;

    return num;
}

float SumNumbersFun(int num)
{
    int sum = 0;
    
    do
    {
        sum += num;
        num = ReadNumberFun("Please, enter a number: ");
    } while (num != -99);

    return sum;
}

void PrintResultFun(float sum)
{
    cout << "\nSum: " << sum << endl;
}
//* End Functions

int main()
{
    WelcomeMessageFun();

    PrintResultFun(SumNumbersFun(ReadNumberFun("Please, enter a number: ")));

    cout << endl
         << endl;

    return 0;
}