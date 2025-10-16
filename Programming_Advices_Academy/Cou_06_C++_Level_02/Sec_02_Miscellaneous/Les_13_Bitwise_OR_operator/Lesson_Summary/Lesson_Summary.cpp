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

    cout << "12 | 25: " << (12 | 25) << endl;
    
    cout << "12 || 25: " << (12 || 25) << endl;

    cout << endl
         << endl;

    return 0;
}