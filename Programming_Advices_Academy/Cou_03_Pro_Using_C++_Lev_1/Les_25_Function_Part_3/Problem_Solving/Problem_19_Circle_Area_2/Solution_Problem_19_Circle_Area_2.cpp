#include <iostream>
#include <cmath>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float calculateCircleArea(float d)
{
    const float R = 3.14;
    float area = (R * pow(d, 2)) / 4;

    return area;
}

//* End Functions

int main()
{
    welcomeMessage();

    float d = 0;

    cout << "Please, enter a d: ";
    cin >> d;

    float area = calculateCircleArea(d);

    cout << "\nCircle Area: " << area << endl;

    cout << endl
         << endl;

    return 0;
}