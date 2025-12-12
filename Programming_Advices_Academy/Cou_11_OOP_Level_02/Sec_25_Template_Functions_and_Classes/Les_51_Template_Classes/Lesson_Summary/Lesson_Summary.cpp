#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

// template <class T>
template <typename T>
class Calculator
{
private:
    T number1, number2;

public:
    Calculator(T n1, T n2)
    {
        number1 = n1;
        number2 = n2;
    }

    T Add()
    {
        return number1 + number2;
    }

    T Subtract()
    {
        return number1 - number2;
    }

    T Multiply()
    {
        return number1 * number2;
    }

    T Divide()
    {
        return number1 / number2;
    }

    void PrintResult()
    {
        cout << "Number: " << number1 << " and " << number2 << ":" << endl;
        cout << number1 << " + " << number2 << " = " << Add() << endl;
        cout << number1 << " - " << number2 << " = " << Subtract() << endl;
        cout << number1 << " * " << number2 << " = " << Multiply() << endl;
        cout << number1 << " / " << number2 << " = " << Divide() << endl;
    }
};

int main()
{
    WelcomeMessage();

    Calculator<int> intCalc(2, 1);
    Calculator<float> floatCalc(2.4, 1.2);

    cout << "Int Result: \n";
    intCalc.PrintResult();
    
    cout << "\nfloat Result: \n";
    floatCalc.PrintResult();

    cout << endl
         << endl;

    return 0;
}