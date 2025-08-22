#include <iostream>
using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void Function4()
{
    cout << "Hi I'm function 4 " << endl;
}

void Function3()
{
    Function4();
}

void Function2()
{
    Function3();
}

void Function1()
{
    Function2();
}

int main()
{
    WelcomeMessage();

    Function1();

    cout << endl
         << endl;

    return 0;
}