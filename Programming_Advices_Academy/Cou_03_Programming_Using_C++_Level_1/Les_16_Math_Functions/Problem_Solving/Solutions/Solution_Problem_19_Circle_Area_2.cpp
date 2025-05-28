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
    float d = 0, area = 0;

    cout << "Please, enter D: ";
    cin >> d;

    // area = (r * (d * d)) / 4;
    area = (r * pow(d, 2)) / 4;

    cout << "\nArea: " << ceil(area) << endl;

    cout << endl
         << endl;

    return 0;
}