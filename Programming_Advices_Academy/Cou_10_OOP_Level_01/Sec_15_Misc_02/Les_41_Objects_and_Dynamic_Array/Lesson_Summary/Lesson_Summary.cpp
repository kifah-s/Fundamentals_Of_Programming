//* Objects and Dynamic Array.

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

    // Dummy constructor.
    clsA() {}

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

    short NumberOfObjects = 5;

    // Allocating dynamic array of Size NumberOfObjects using new keyword.

    clsA *arrA = new clsA[NumberOfObjects];

    // Calling constructor for each index of array.
    for (int i = 0; i < NumberOfObjects; i++)
    {
        arrA[i] = clsA(i);
    }

    // Printing contents of array.
    for (int i = 0; i < NumberOfObjects; i++)
    {
        arrA[i].Print();
    }

    cout << endl
         << endl;

    return 0;
}