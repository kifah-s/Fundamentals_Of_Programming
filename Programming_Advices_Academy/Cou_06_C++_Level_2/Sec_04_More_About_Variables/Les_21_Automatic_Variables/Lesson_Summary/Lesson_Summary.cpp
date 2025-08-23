#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    auto x = 10; //* Type Integer
    auto y = 12.5; //* Type Double
    auto z = "kifah saloum"; //* Type String

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    cout << endl
         << endl;

    return 0;
}