#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int MySum(int a, int b)
{
    int s = 0;
    s = a + b;
    return s;
}

int main()
{
    WelcomeMessage();

    int arr1[5] = {200, 100, 50, 25, 30};
    int a, b, c;

    a = 10;
    b = 20;

    a++;
    ++b;
    c = a + b;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
        a = a + a * i;
    }

    c = MySum(a, b);

    cout << c;

    cout << endl
         << endl;

    return 0;
}