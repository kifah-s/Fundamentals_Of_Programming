#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void readNumbersFun(int &num1, int &num2)
{
    cout << "Please, enter first number: ";
    cin >> num1;
    cout << "Please, enter second number: ";
    cin >> num2;
}

void swapNumbers(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void printResultFun(int num1, int num2)
{
    cout << "\nBefore Swap:" << endl;
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    swapNumbers(num1, num2);

    cout << "\nAfter Swap:" << endl;
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();

    int firstNumber = 0, secondNumber = 0;
    readNumbersFun(firstNumber, secondNumber);
    printResultFun(firstNumber, secondNumber);

    cout << endl
         << endl;

    return 0;
}