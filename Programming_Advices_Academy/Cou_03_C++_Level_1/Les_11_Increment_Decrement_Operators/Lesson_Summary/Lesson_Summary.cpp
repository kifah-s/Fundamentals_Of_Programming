#include <iostream>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Function

int main()
{
    welcomeMessage();

    int a = 10, b = 20;

    a++;
    // ++a;
    cout << "A: " << a << endl;

    b--;
    // --b;
    cout << "B: " << b << endl;

    cout << endl
         << endl;

    return 0;
}