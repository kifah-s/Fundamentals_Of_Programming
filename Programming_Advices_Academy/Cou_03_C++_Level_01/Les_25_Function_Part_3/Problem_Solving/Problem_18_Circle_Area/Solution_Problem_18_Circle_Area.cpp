#include <iostream>
#include <cmath>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float calculateCircleArea(float r)
{
    const float R = 3.14;
    float area = R * pow(r, 2);

    return area;
}

//* End Functions

int main()
{
    welcomeMessage();

    float r = 0;

    cout << "Please, enter a r: ";
    cin >> r;

    float area = calculateCircleArea(r);

    cout << "\nCircle Area: " << area << endl;

    cout << endl
         << endl;

    return 0;
}