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
    int b = 50;

    cout << "a Value: " << a << endl; 
    cout << "&a Address: " << &a << endl; 
    
    // int *ptr = &a;
    int *ptr;
    ptr = &a;
    cout << "p Pointer Value: " << ptr << endl;
    
    *ptr = 20;
    
    cout << "a Value: " << a << endl; 
    cout << "a Value: " << *ptr << endl; 
    
    ptr = &b;
    cout << "b Value: " << b << endl; 
    
    *ptr = 100;
    cout << "b Value: " << b << endl; 

    cout << endl
         << endl;

    return 0;
}