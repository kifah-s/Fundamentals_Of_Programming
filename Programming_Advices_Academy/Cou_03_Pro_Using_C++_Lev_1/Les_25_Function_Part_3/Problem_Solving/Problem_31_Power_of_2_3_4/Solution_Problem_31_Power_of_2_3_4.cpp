#include <iostream>
#include <cmath>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void calculatePowerOf_2_3_4(int num)
{
    cout << num << "^2: " << pow(num, 2) << endl;
    cout << num << "^3: " << pow(num, 3) << endl;
    cout << num << "^4: " << pow(num, 4) << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    int number = 0;

    cout << "Please, enter a number: ";
    cin >> number;

    calculatePowerOf_2_3_4(number);

    cout << endl
         << endl;

    return 0;
}