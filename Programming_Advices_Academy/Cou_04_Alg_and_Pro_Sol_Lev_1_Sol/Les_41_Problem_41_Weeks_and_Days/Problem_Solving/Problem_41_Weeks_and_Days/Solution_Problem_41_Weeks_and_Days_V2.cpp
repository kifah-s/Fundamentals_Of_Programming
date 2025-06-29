#include <iostream>

using namespace std;

//* Functions

void WelcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float ReadNumberOfHoursFun()
{
    float numOfHou = 0;
    cout << "Please, enter a number of hours: ";
    cin >> numOfHou;

    return numOfHou;
}

float CalculateNumberOfWeeksFun(float numOfHou)
{
    return numOfHou / 168;
}

float CalculateNumberOfDaysFun(float numOfHou)
{
    return numOfHou / 24;
}

void PrintResultFun(float numOfHou)
{
    cout << "Weeks: " << CalculateNumberOfWeeksFun(numOfHou) << endl;
    cout << "Days: " << CalculateNumberOfDaysFun(numOfHou) << endl;
}

//* End Functions

int main()
{
    WelcomeMessageFun();

    PrintResultFun(ReadNumberOfHoursFun());

    cout << endl
         << endl;

    return 0;
}