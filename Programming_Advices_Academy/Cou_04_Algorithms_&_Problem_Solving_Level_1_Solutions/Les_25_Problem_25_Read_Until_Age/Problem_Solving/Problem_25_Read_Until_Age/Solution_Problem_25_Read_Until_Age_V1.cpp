#include <iostream>

using namespace std;

//* Functions

void WelcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int ReadAgeFun()
{
    int age = 0;

    cout << "\nPlease, enter your age: ";
    cin >> age;

    return age;
}

bool CheckAgeFun(int age)
{
    if (age >= 18 && age <= 45)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void PrintResultFun(int age)
{
    if (CheckAgeFun(age))
    {
        cout << "\nValid" << endl;
    }
    else
    {
        cout << "\nInValid" << endl;
    }
}

//* End Functions

int main()
{
    WelcomeMessageFun();

    int age = 0;

    do
    {
        age = ReadAgeFun();
        PrintResultFun(age);
    } while (!CheckAgeFun(age));

    cout << endl
         << endl;

    return 0;
}