#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    float num1, num2;
    char operationType;

    cout << "Please enter num 1: ";
    cin >> num1;

    cout << "Please enter num 2: ";
    cin >> num2;

    cout << "Please enter operation type (+ , - , / , *): ";
    cin >> operationType;

    switch (operationType)
    {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;

    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;

    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;

    case '/':
        cout << "Result: " << num1 / num2 << endl;
        break;

    default:
        cout << "Wrong Operation" << endl;
        break;
    }

    cout << endl
         << endl;

    return 0;
}