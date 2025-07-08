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

    cout << "While Loop: " << endl;
    int i = 6;
    while (i < 5)
    {
        cout << "kifah" << endl;
        i++;
    }

    cout << "********************" << endl;

    cout << "Do While Loop: " << endl;
    int j = 6;
    do
    {
        cout << "kifah" << endl;
        j++;
    } while (j < 5);

    cout << endl
         << endl;

    return 0;
}