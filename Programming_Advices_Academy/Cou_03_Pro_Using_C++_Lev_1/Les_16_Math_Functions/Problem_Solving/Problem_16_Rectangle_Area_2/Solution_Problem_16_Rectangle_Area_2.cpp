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

    float a = 0, d = 0, area = 0;

    cout << "Please, enter a: ";
    cin >> a;

    cout << "Please, enter d: ";
    cin >> d;

    area = a * sqrt(pow(d, 2) - pow(a, 2));

    cout << "Area: " << area << endl;

    cout << endl
         << endl;

    return 0;
}