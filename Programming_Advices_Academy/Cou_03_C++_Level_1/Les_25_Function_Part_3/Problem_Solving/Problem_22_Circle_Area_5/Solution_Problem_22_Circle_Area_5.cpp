#include <iostream>
#include <cmath>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float calculateCircleArea(float a, float b)
{
    const float R = 3.14;

    float area = R * pow(b, 2) / 4 * ((2 * a - b) / (2 * a + b));

    return area;
}

//* End Functions

int main()
{
    welcomeMessage();

    float a = 0, b = 0;

    cout << "Please, enter a: ";
    cin >> a;

    cout << "Please, enter b: ";
    cin >> b;

    float area = calculateCircleArea(a, b);

    cout << "\nCircle Area: " << area << endl;

    cout << endl
         << endl;

    return 0;
}