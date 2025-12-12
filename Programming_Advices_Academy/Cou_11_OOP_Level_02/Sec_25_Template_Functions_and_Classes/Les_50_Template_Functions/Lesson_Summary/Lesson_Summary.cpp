#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

template <typename T>
T myMax(T number1, T number2)
{
    return (number1 > number2) ? number1 : number2;
}

int main()
{
    WelcomeMessage();

    cout << myMax<int>(3, 7) << endl;        // Call myMax for int.
    cout << myMax<double>(5.3, 8.2) << endl; // Call myMax for double.
    cout << myMax<char>('a', 'd') << endl;   // Call myMax for char.

    cout << endl
         << endl;

    return 0;
}