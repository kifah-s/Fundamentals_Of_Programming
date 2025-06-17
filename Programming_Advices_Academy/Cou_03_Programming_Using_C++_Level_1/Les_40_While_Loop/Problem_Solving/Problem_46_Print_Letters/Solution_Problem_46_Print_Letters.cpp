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
    // for (int i = 65; i < 91; i++)
    // {
    //     cout << char(i) << endl;
    // }

    int i = 65;
    while (i < 91)
    {
        cout << char(i) << endl;
        i++;
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