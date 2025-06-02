#include <iostream>

using namespace std;

int x = 500; //* Global Variable.

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void myFunction1()
{
    int x = 10;

    cout << "X in my function 1: " << x << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    int x = 20;

    ::x = 30;

    cout << "X in global scope: " << ::x << endl;

    cout << "X in main Function: " << x << endl;

    myFunction1();

    cout << endl
         << endl;

    return 0;
}