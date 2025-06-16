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
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i; j <= 10; j++)
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