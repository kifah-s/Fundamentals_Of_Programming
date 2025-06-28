#include <iostream>
#include <cmath>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float calculateCircleArea(float l)
{
    const float R = 3.14;

    float area = pow(l, 2) / (4 * R);

    return area;
}

//* End Functions

int main()
{
    welcomeMessage();

    float L = 0;

    cout << "Please, enter a L: ";
    cin >> L;

    float area = calculateCircleArea(L);

    cout << "\nCircle Area: " << area << endl;

    cout << endl
         << endl;

    return 0;
}