#include <iostream>

using namespace std;

void WelcomeMessage()
{
    system("cls");
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
    
    //* ----------------------------------
    
    int *ptr = &a;
    
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;
    
    //* ----------------------------------
    
    int b = 20;
    ptr = &b;
    // &x = b; //* Error.
    
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;

    cout << endl
         << endl;

    return 0;
}