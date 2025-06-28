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
    for (int i = 65; i <= 70; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << (char)j << " ";
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