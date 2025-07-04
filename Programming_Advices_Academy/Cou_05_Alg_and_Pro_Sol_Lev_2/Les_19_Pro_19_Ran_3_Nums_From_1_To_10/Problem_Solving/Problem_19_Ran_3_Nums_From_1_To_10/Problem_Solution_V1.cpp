#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void Random3NumbersFrom1To10()
{
    srand(time(0));

    for (int i = 0; i < 3; i++)
    {
        int randomNumber = (rand() % 10) + 1;
        cout << randomNumber << endl;
    }
}

int main()
{
    WelcomeMessage();

    Random3NumbersFrom1To10();

    cout << endl
         << endl;

    return 0;
}