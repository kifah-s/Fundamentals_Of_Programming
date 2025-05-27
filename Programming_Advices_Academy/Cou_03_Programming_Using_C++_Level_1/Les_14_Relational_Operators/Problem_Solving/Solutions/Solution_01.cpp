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
    int num1 = 0, num2 = 0;

    cout << "Please, enter num 1: ";
    cin >> num1;

    cout << "Please, enter num 2: ";
    cin >> num2;

    cout << "\n"
         << num1 << " = " << num2 << " is: " << (num1 == num2) << endl;
    cout << num1 << " != " << num2 << " is: " << (num1 != num2) << endl;
    cout << num1 << " > " << num2 << " is: " << (num1 > num2) << endl;
    cout << num1 << " < " << num2 << " is: " << (num1 < num2) << endl;
    cout << num1 << " >= " << num2 << " is: " << (num1 >= num2) << endl;
    cout << num1 << " <= " << num2 << " is: " << (num1 <= num2) << endl;

    cout << endl
         << endl;

    return 0;
}