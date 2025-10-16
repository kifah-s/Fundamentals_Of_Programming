#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

double MySum(double a, double b)
{
    return (a + b);
}

int MySum(int a, int b)
{
    return (a + b);
}

int MySum(int a, int b, int c)
{
    return (a + b + c);
}

int MySum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}

int main()
{
    WelcomeMessage();

    cout << "MySum 2 Integer Numbers: " << MySum(10, 20) << endl;
    cout << "MySum 2 Double Numbers: " << MySum(10.1, 20.1) << endl;
    cout << "MySum 3 Integer Numbers: " << MySum(10, 20, 30) << endl;
    cout << "MySum 4 Integer Numbers: " << MySum(10, 20, 30, 40) << endl;

    cout << endl
         << endl;

    return 0;
}