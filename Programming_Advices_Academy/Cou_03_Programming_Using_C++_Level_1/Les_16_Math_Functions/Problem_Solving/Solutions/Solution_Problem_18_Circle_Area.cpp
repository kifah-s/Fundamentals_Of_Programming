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

    float r = 0, area = 0;

    cout << "Please, enter r: ";
    cin >> r;

    area = 3.14 * pow(r, 2);

    cout << "Area: " << ceil(area) << endl;

    cout << endl
         << endl;

    return 0;
}