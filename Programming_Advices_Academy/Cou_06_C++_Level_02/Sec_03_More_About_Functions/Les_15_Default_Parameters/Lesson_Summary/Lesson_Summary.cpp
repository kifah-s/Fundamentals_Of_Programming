#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int MySum(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}

int main()
{
    WelcomeMessage();
    cout << "Result: " << MySum(10, 20) << endl;
    cout << "Result: " << MySum(10, 20, 30) << endl;
    cout << "Result: " << MySum(10, 20, 30, 40) << endl;

    cout << endl
         << endl;

    return 0;
}