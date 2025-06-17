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

    for (int i = 0; i < 10; i++)
    {
        if (i == 3)
        {
            break;
        }

        cout << i << endl;
    }

    cout << endl
         << endl;

    return 0;
}