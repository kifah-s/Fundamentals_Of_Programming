#include <iostream>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Function

int main()
{
    welcomeMessage();

    float a, h, area;

    cout << "Please, enter a: ";
    cin >> a;

    cout << "Please, enter h: ";
    cin >> h;

    area = 0.5 * a * h;

    cout << "\nArea: " << area << endl;

    cout << endl
         << endl;

    return 0;
}