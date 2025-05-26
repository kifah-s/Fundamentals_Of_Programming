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

    int number1 = 0, number2 = 0, temp = 0;

    cout << "Please, please enter number 1: ";
    cin >> number1;

    cout << "Please, please enter number 2: ";
    cin >> number2;

    cout << "\nBefor Swap:\n";
    cout << "number 1: " << number1 << endl;
    cout << "number 2: " << number2 << endl;

    // Swap Number.
    temp = number1;
    number1 = number2;
    number2 = temp;

    cout << "\nAfter Swap:\n";
    cout << "number 1: " << number1 << endl;
    cout << "number 2: " << number2 << endl;

    cout << endl
         << endl;

    return 0;
}