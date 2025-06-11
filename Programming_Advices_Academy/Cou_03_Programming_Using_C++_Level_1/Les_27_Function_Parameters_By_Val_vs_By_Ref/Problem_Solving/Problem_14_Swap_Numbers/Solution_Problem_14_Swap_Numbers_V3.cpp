#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void swapNumbers(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

//* End Functions

int main()
{
    welcomeMessage();

    int number1 = 0, number2 = 0;
    ;

    cout << "Please, enter num 1: ";
    cin >> number1;

    cout << "Please, enter num 2: ";
    cin >> number2;

    cout << "\nBefor Swap:" << endl;
    cout << "Num 1: " << number1 << endl;
    cout << "Num 2: " << number2 << endl;

    swapNumbers(number1, number2);

    cout << "\nAfter Swap:" << endl;
    cout << "Num 1: " << number1 << endl;
    cout << "Num 2: " << number2 << endl;

    cout << endl
         << endl;

    return 0;
}