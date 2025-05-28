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
    float a = 0, b = 0, c = 0, p = 0, area = 0;

    cout << "Please, enter A: ";
    cin >> a;

    cout << "Please, enter B: ";
    cin >> b;

    cout << "Please, enter C: ";
    cin >> c;

    p = (a + b + c) / 2;

    area = r * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2);

    cout << "\nArea: " << round(area) << endl;

    cout << endl
         << endl;

    return 0;
}