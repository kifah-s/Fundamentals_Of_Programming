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
    float a = 0, area = 0;

    cout << "Please, enter A: ";
    cin >> a;

    // area = r * ((a / 2) * (a / 2));
    area = r * pow((a / 2), 2);

    cout << "\nArea: " << area << endl;

    cout << endl
         << endl;

    return 0;
}