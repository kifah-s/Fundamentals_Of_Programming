#include <iostream>

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
    float d = 0, area = 0;

    cout << "Please, enter D: ";
    cin >> d;

    area = (r * (d * d)) / 4;

    cout << "\nArea: " << area << endl;

    cout << endl
         << endl;

    return 0;
}