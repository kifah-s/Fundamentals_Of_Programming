#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void sumProcedure()
{
    int num1 = 0, num2 = 0, sum = 0;

    cout << "Please, enter num 1: ";
    cin >> num1;

    cout << "Please, enter num 2: ";
    cin >> num2;

    cout << "*****************************" << endl;

    sum = num1 + num2;

    cout << "Sum: " << sum << endl;
}

int sumFunction()
{
    int num1 = 0, num2 = 0, sum = 0;

    cout << "Please, enter num 1: ";
    cin >> num1;

    cout << "Please, enter num 2: ";
    cin >> num2;

    cout << "*****************************" << endl;

    sum = num1 + num2;

    return sum;
}

//* End Functions

int main()
{
    welcomeMessage();

    sumProcedure();

    cout << "\n_________________________________\n"
         << endl;

    int sum = sumFunction();
    cout << "Sum: " << sum;

    cout << endl
         << endl;

    return 0;
}