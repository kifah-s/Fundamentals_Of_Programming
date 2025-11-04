//* Objects with Parameterized Constructor and Array.

#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

class clsA
{
public:
    int x;

    // Parameterized Constructor.
    clsA(int value)
    {
        x = value;
    }

    void Print()
    {
        cout << "The value of x: " << x << endl;
    }
};

int main()
{
    WelcomeMessage();

    // Initializing 3 array Objects with function calls of parameterized constructor as elements of that array.
    clsA obj[] = {clsA(10), clsA(20), clsA(30)};

    // Using print method for each of three elements.
    for (int i = 0; i < 3; i++)
    {
        obj[i].Print();
    }

    cout << endl
         << endl;

    return 0;
}