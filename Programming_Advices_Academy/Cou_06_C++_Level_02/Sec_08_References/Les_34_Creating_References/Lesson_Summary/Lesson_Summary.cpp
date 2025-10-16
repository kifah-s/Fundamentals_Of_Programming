#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    int a = 10;
    int &x = a;
    cout << "a: " << a << endl;
    cout << "x: " << x << endl;
    cout << "&a: " << &a << endl;
    cout << "&x: " << &x << endl;

    a = 20;
    cout << "\na: " << a << endl;
    cout << "x: " << x << endl;
    cout << "&a: " << &a << endl;
    cout << "&x: " << &x << endl;
    
    x = 30;
    cout << "\na: " << a << endl;
    cout << "x: " << x << endl;
    cout << "&a: " << &a << endl;
    cout << "&x: " << &x << endl;


    cout << endl
         << endl;

    return 0;
}