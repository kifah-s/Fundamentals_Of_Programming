
//* Class Calculator Program (Version 2).

/*
* Create a class named Calculator with attributes num1 and num2.
* Include methods to perform basic arithmetic operations (addition, subtraction, multiplication, division).

! Output:
! addition: 15
! subtraction: 5
! multiplication: 50
! division: 2
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Classes ..
class Calculator
{
private:
    int num1, num2;

public:
    // Setter.
    void setNum1(int n1)
    {
        num1 = n1;
    }

    void setNum2(int n2)
    {
        num2 = n2;
    }

    // Getter.
    int getAddition()
    {
        int addition = num1 + num2;
        return addition;
    }

    int getSubtraction()
    {
        int subtraction = num1 - num2;
        return subtraction;
    }

    int getMultiplication()
    {
        int multiplication = num1 * num2;
        return multiplication;
    }

    int getDivision()
    {
        if (num2 != 0)
        {
            int division = num1 / num2;
            return division;
        }
        else
        {
            cout << "Cannot division by zero." << endl;
            return 0;
        }
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Calculator Program (Version 2) ..\n"
         << endl;
}

// Calculator - Function.
void calculatorFun()
{
    Calculator c1;
    c1.setNum1(10);
    c1.setNum2(5);

    cout << "addition: " << c1.getAddition() << endl;
    cout << "subtraction: " << c1.getSubtraction() << endl;
    cout << "multiplication: " << c1.getMultiplication() << endl;
    cout << "division: " << c1.getDivision() << endl;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    calculatorFun();

    cout << "\n"
         << endl;
}
//* End Function ..
