#include <iostream>
#include <cmath>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int calculatePowerOf_2_3_4(int num, int m)
{
    return pow(num, m);
}

//* End Functions

int main()
{
    welcomeMessage();

    int number = 0, M = 0;

    cout << "Please, enter a number: ";
    cin >> number;

    cout << "Please, enter M: ";
    cin >> M;

    int result = calculatePowerOf_2_3_4(number, M);

    cout << "\n" << number << "^" << M << ": " << result << endl;

    cout << endl
         << endl;

    return 0;
}