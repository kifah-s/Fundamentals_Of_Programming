#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void swapNumbers(int n1, int n2)
{
    int temp = 0;

    temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "\nAfter Swap:" << endl;
    cout << "Num 1: " << n1 << endl;
    cout << "Num 2: " << n2 << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    int num1 = 0, num2 = 0;

    cout << "Please, enter num 1: ";
    cin >> num1;

    cout << "Please, enter num 2: ";
    cin >> num2;

    cout << "\nBefor Swap:" << endl;
    cout << "Num 1: " << num1 << endl;
    cout << "Num 2: " << num2 << endl;

    swapNumbers(num1, num2);

    cout << endl
         << endl;

    return 0;
}