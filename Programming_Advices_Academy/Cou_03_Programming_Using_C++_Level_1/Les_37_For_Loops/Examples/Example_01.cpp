#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }
    

    cout << endl
         << endl;

    return 0;
}