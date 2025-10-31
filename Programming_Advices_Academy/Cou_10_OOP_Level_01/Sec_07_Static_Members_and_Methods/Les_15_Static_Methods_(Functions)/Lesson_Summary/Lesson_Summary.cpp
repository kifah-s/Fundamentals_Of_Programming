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
    static int Function1()
    {
        return 10;
    }

    int Function2()
    {
        return 20;
    }
};

int main()
{
    WelcomeMessage();

    // The following line calls static function directly via class no through the object
    // At class level you can call only static methods and static members
    cout << clsA::Function1() << endl;

    // Static methods can also be called through the object.
    clsA A1;
    cout << A1.Function1() << endl;
    cout << A1.Function2() << endl;

    cout << endl
         << endl;

    return 0;
}