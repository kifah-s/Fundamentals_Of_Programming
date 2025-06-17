#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();

    cout << "For Loop: " << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << i << endl;
    }

    cout << "*****************" << endl;

    cout << "While Loop: " << endl;
    int i = 0;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }

    cout << endl
         << endl;

    return 0;
}