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

    int num1 = 20;
    int num2 = 30;
    int num3 = 10;
    int sum = num1 + num2 + num3;

    cout << num1 << " +\n";
    cout << num2 << " +\n";
    cout << num3 << endl;
    cout << "--------------" << endl;
    cout << "Total: " << sum << endl;

    cout << endl
         << endl;

    return 0;
}