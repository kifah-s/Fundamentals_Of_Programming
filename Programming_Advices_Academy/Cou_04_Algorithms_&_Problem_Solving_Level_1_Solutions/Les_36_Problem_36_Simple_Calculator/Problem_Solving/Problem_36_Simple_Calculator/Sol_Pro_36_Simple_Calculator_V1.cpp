#include <iostream>

using namespace std;

//* Structs

struct stSimpleCalculator
{
    float firstNumber = 0;
    float secondNumber = 0;
    char operationType = '+';
};

//* End Structs

//* Functions

void WelcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stSimpleCalculator ReadDataFun()
{
    stSimpleCalculator simpCalc;

    cout << "Please, enter first number: ";
    cin >> simpCalc.firstNumber;

    cout << "Please, enter second number: ";
    cin >> simpCalc.secondNumber;

    cout << "Please, enter operation type: ";
    cin >> simpCalc.operationType;

    return simpCalc;
}

float AddFun(float num1, float num2)
{
    return num1 + num2;
}

float SubtractFun(float num1, float num2)
{
    return num1 - num2;
}

float MultiplyFun(float num1, float num2)
{
    return num1 * num2;
}

float DivideFun(float num1, float num2)
{
    return num1 / num2;
}

void PrintResultFun(stSimpleCalculator simpCalc)
{
    switch (simpCalc.operationType)
    {
    case '+':
        cout << "\n"
             << simpCalc.firstNumber << " + " << simpCalc.secondNumber << ": " << AddFun(simpCalc.firstNumber, simpCalc.secondNumber);
        break;

    case '-':
        cout << "\n"
             << simpCalc.firstNumber << " - " << simpCalc.secondNumber << ": " << SubtractFun(simpCalc.firstNumber, simpCalc.secondNumber);
        break;

    case '*':
        cout << "\n"
             << simpCalc.firstNumber << " * " << simpCalc.secondNumber << ": " << MultiplyFun(simpCalc.firstNumber, simpCalc.secondNumber);
        break;

    case '/':
        cout << "\n"
             << simpCalc.firstNumber << " / " << simpCalc.secondNumber << ": " << DivideFun(simpCalc.firstNumber, simpCalc.secondNumber);
        break;

    default:
        break;
    }
}

//* End Functions

int main()
{
    WelcomeMessageFun();

    PrintResultFun(ReadDataFun());

    cout << endl
         << endl;

    return 0;
}