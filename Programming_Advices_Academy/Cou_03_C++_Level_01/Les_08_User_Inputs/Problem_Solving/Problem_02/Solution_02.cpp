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

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int sum = 0;

    cout << "Please, enter num 1: ";
    cin >> num1;

    cout << "Please, enter num 2: ";
    cin >> num2;

    cout << "Please, enter num 3: ";
    cin >> num3;

    sum = num1 + num2 + num3;
    
    cout << "\n" << num1 << " +\n";
    cout << num2 << " +\n";
    cout << num3 << endl;
    cout << "--------------" << endl;
    cout << "Total: " << sum << endl;

    cout << endl
         << endl;

    return 0;
}