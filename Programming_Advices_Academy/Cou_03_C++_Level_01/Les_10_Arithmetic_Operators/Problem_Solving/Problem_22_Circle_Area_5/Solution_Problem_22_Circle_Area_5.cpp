#include <iostream>
#include <cmath>

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

    const float r = 3.14;
    float a = 0, b = 0, area = 0;

    cout << "Please, enter A: ";
    cin >> a;

    cout << "Please, enter B: ";
    cin >> b;

    area = r * ((b * b) / 4) * ((2 * a - b) / (2 * a + b));

    cout << "\nArea: " << area << endl;

    cout << endl
         << endl;

    return 0;
}