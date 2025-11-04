//* Adding Objects to Vector.

#include <iostream>
#include <vector>

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

    vector<clsA> v1;
    short NumberOfObjects = 5;

    // Inserting object at the end of vector.
    for (int i = 0; i < NumberOfObjects; i++)
    {
        v1.push_back(clsA(i));
    }

    // printing object content
    for (int i = 0; i < NumberOfObjects; i++)
    {
        v1[i].Print();
    }

    cout << endl
         << endl;

    return 0;
}