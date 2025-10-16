#include <iostream>
#include <cmath>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float calculateCircleArea(float a, float b, float c)
{
    const float R = 3.14;
    const float P = (a + b + c) / 2;

    float area = R * pow((a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c))), 2);

    return area;
}

//* End Functions

int main()
{
    welcomeMessage();

    float a = 0, b = 0, c = 0;

    cout << "Please, enter a: ";
    cin >> a;

    cout << "Please, enter b: ";
    cin >> b;

    cout << "Please, enter c: ";
    cin >> c;

    float area = calculateCircleArea(a, b, c);

    cout << "\nCircle Area: " << area << endl;

    cout << endl
         << endl;

    return 0;
}