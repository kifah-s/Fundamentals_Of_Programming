#include <iostream>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Function

int main()
{
    welcomeMessage();

    // int a = 10, b = 0;

    // b = a++;
    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

    // b = ++a;
    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

    // b = a--;
    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

    // b = --a;
    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

    int A = 10;

    int B = A++;

    cout << "A: " << A << endl;
    cout << "B: " << B << endl;

    B = ++A;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;

    cout << endl
         << endl;

    return 0;
}