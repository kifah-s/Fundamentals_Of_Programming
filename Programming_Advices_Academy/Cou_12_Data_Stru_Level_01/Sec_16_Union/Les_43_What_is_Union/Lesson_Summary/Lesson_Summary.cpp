#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

union MyUnion
{
    int intValue;
    float floatValue;
    char charValue;
};

int main()
{
    WelcomeMessage();

    MyUnion myUnion;

    myUnion.intValue = 42;
    cout << "Integer value: " << myUnion.intValue << endl;

    myUnion.floatValue = 3.14f;
    cout << "Float value: " << myUnion.floatValue << endl;

    myUnion.charValue = 'A';
    cout << "Char value: " << myUnion.charValue << endl;

    cout << endl
         << endl;

    return 0;
}