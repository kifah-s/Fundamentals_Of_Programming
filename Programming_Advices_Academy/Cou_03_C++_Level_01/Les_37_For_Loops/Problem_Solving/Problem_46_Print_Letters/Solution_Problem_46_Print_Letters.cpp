#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void printLettersFun()
{
    for (int i = 65; i < 91; i++)
    {
        cout << char(i) << endl;
    }
}

//* End Functions

int main()
{
    welcomeMessageFun();
    printLettersFun();

    cout << endl
         << endl;

    return 0;
}