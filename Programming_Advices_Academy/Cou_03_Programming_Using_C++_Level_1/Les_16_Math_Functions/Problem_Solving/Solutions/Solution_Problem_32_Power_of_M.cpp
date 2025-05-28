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

    float number = 0, m = 0;

    cout << "Please, enter a number: ";
    cin >> number;

    cout << "Please, enter M: ";
    cin >> m;

    cout << "\nNumber: " << pow(number, m);
    cout << "\nNumber: " << round(pow(number, m));

    cout << endl
         << endl;

    return 0;
}