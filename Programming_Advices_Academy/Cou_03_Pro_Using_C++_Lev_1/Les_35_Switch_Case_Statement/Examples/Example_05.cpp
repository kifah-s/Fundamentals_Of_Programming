#include <iostream>

using namespace std;

enum enColor
{
    red = 1,
    blue,
    green,
    yellow
};

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    int chose = 0;

    cout << "***************************" << endl;
    cout << "Please, chose the number of your color: " << endl;
    cout << "(1) Red" << endl;
    cout << "(2) Blue" << endl;
    cout << "(3) Green" << endl;
    cout << "(4) Yellow" << endl;
    cout << "***************************" << endl;
    cout << "Your Choice: ";
    cin >> chose;

    enColor color = (enColor)chose;
    switch (color)
    {
    case red:
        cout << "\nYour color is red." << endl;
        break;

    case blue:
        cout << "\nYour color is blue." << endl;
        break;

    case green:
        cout << "\nYour color is green." << endl;
        break;

    case yellow:
        cout << "\nYour color is yellow." << endl;
        break;

    default:
        break;
    }

    cout << endl
         << endl;

    return 0;
}