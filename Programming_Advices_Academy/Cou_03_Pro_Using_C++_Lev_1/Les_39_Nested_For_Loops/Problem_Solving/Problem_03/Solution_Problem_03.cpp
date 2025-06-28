#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void printTriangleFun()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

//* End Functions

int main()
{
    welcomeMessageFun();

    printTriangleFun();

    cout << endl
         << endl;

    return 0;
}