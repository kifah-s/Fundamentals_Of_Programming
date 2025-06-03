#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    int time = 22;

    if (time < 10)
    {
        cout << "Good Morning" << endl;
    }
    else if (time < 20)
    {
        cout << "Good Day" << endl;
    }
    else
    {
        cout << "Good Evening" << endl;
    }

    cout << endl
         << endl;

    return 0;
}