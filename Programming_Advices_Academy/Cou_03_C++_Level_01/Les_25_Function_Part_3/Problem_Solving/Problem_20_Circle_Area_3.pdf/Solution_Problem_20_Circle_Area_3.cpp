#include <iostream>
#include <cmath>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float calculateCircleArea(float a)
{
    const float R = 3.14;

    float area = R * pow(a / 2, 2);

    return area;
}

//* End Functions

int main()
{
    welcomeMessage();

    float a = 0;

    cout << "Please, enter a A: ";
    cin >> a;

    float area = calculateCircleArea(a);

    cout << "\nCircle Area: " << area << endl;

    cout << endl
         << endl;

    return 0;
}