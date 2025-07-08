#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int sumFunction(int num1, int num2)
{
    return num1 + num2;
}

//* End Functions

int main()
{
    welcomeMessage();

    // cout << "Sum: " << sumFunction(20, 10) << endl;
    // cout << "Sum: " << sumFunction(50, 10) << endl;
    // cout << "Sum: " << sumFunction(20, 20) << endl;

    //* _____________________________________________

    // int num1 = 0, num2 = 0;

    // cout << "Please, enter num 1: ";
    // cin >> num1;

    // cout << "Please, enter num 2: ";
    // cin >> num2;

    // cout << "Sum: " << sumFunction(num1, num2) << endl;

    //* _____________________________________________

    // int num1 = 0, num2 = 0, sum = 0;

    // cout << "Please, enter num 1: ";
    // cin >> num1;

    // cout << "Please, enter num 2: ";
    // cin >> num2;

    // sum = sumFunction(num1, num2);

    // cout << "Sum: " << sum << endl;

    //* _____________________________________________

    cout << endl
         << endl;

    return 0;
}