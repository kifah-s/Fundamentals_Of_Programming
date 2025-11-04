//* Objects can be treated like any data type such as int, bool, string ...etc, They can be passed to functions as parameters either by reference or by value.

#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

class clsA
{
public:
    int x;

    void Print()
    {
        cout << "The value of x: " << x << endl;
    }
};

// Object sent by value, any updated will not b reflected on the original object.
void Fun1(clsA A1)
{
    A1.x = 100;
}

// Object sent by reference, any updated will be reflected on the original object.
void Fun2(clsA &A1)
{
    A1.x = 200;
}

int main()
{
    WelcomeMessage();

    clsA A1;
    A1.x = 50;

    cout << "\nA.x before calling function1: " << endl;
    A1.Print();

    // Pass by value, object will not be affected.
    Fun1(A1);
    cout << "\nA.x after calling function1 by Val: " << endl;
    A1.Print();

    // Pass by value, object will be affected.
    Fun2(A1);
    cout << "\nA.x after calling function2 by Ref: " << endl;
    A1.Print();

    cout << endl
         << endl;

    return 0;
}