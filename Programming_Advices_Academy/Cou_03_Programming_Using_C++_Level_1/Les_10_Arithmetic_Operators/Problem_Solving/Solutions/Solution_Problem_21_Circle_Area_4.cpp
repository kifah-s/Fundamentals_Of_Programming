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
    float l = 0, area = 0;

    cout << "Please, enter A: ";
    cin >> l;

    area = pow(l, 2) / (4 * r);
    // area = (l * l) / (4 * r);

    cout << "\nArea: " << area << endl;

    cout << endl
         << endl;

    return 0;
}