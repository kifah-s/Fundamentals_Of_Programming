#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    int day = 4;

    switch (day)
    {
    case 1:
        cout << "Sunday" << endl;
        break;

    case 2:
        cout << "Monday" << endl;
        break;

    case 3:
        cout << "Tuesday" << endl;
        break;

    case 4:
        cout << "Wednesday" << endl;
        break;

    case 5:
        cout << "Thursday" << endl;
        break;

    case 6:
        cout << "Friday" << endl;
        break;

    case 7:
        cout << "Saturday" << endl;
        break;

    default:
        cout << "Not a week day" << endl;
        break;
    }

    cout << endl
         << endl;

    return 0;
}