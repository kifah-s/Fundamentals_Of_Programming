#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void MyFunction()
{
    // int number = 1;

    //* Static Variables.
    static int number = 1;

    cout << "Value Of Number Is: " << number << endl;
    number++;
}

int main()
{
    WelcomeMessage();

    MyFunction();
    MyFunction();
    MyFunction();
    MyFunction();
    MyFunction();

    cout << endl
         << endl;

    return 0;
}