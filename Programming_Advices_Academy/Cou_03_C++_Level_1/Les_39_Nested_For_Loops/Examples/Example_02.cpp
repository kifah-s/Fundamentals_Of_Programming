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

    for (int i = 1; i <= 10; i++)
    {

        for (int j = 1; j <= 10; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl
         << endl;

    return 0;
}