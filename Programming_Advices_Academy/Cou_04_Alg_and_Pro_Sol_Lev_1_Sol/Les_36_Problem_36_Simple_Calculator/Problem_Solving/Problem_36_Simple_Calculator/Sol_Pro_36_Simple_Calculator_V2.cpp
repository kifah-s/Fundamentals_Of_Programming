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

float ArithmeticOperationsFun(float num1, float num2, char operType)
{
    if (operType == '+')
    {
        return num1 + num2;
    }
    else if (operType == '-')
    {
        return num1 - num2;
    }
    else if (operType == '*')
    {
        return num1 * num2;
    }
    else if (operType == '/')
    {
        return num1 / num2;
    }

    return 0;
}

void PrintResultFun(stSimpleCalculator simpCalc)
{
    switch (simpCalc.operationType)
    {
    case '+':
        cout << "\n"
             << simpCalc.firstNumber << " + " << simpCalc.secondNumber << ": " << ArithmeticOperationsFun(simpCalc.firstNumber, simpCalc.secondNumber, simpCalc.operationType);
        break;

    case '-':
        cout << "\n"
             << simpCalc.firstNumber << " - " << simpCalc.secondNumber << ": " << ArithmeticOperationsFun(simpCalc.firstNumber, simpCalc.secondNumber, simpCalc.operationType);
        break;

    case '*':
        cout << "\n"
             << simpCalc.firstNumber << " * " << simpCalc.secondNumber << ": " << ArithmeticOperationsFun(simpCalc.firstNumber, simpCalc.secondNumber, simpCalc.operationType);
        break;

    case '/':
        cout << "\n"
             << simpCalc.firstNumber << " / " << simpCalc.secondNumber << ": " << ArithmeticOperationsFun(simpCalc.firstNumber, simpCalc.secondNumber, simpCalc.operationType);
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