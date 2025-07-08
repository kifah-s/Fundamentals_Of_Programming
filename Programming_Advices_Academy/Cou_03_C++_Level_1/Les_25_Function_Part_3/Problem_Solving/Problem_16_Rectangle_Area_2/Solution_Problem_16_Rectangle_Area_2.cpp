#include <iostream>
#include <cmath>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float calculateRectangleArea(float a, float d)
{
    float area = a * sqrt(pow(d, 2) - pow(a, 2));

    return area;
}

//* End Functions

int main()
{
    welcomeMessage();

    float a = 0, d = 0;

    cout << "Please, enter a a: ";
    cin >> a;

    cout << "Please, enter a d: ";
    cin >> d;

    float area = calculateRectangleArea(a, d);

    cout << "\nRectangle Area: " << area << endl;

    cout << endl
         << endl;

    return 0;
}