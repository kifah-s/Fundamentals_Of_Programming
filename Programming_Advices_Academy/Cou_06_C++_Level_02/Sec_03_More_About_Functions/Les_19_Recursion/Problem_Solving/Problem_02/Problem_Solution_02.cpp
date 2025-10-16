#include <iostream>
using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int MyPower(int Base, int Power)
{
    if (Power == 0)
    {
        return 1;
    }
    else
    {
        return (Base * MyPower(Base, Power - 1));
    }
}

int main()
{
    WelcomeMessage();
    int result = 1;

    result = MyPower(2, 3);
    cout << "Result: " << result << endl;

    cout << endl
         << endl;

    return 0;
}