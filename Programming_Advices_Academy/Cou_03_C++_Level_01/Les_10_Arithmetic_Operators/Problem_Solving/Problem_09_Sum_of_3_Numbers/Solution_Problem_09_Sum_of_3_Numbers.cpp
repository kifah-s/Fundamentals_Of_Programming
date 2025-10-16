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

    int number1 = 0, number2 = 0, number3 = 0, sum = 0;

    cout << "Please, enter number 1: ";
    cin >> number1;
    
    cout << "Please, enter number 1: ";
    cin >> number2;
    
    cout << "Please, enter number 1: ";
    cin >> number3;

    sum = number1 + number2 + number3;

    cout << "\nSum: " << sum << endl;

    cout << endl
         << endl;

    return 0;
}