#include <iostream>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Function

int main()
{
    welcomeMessage();

    int num1 = 10, num2 = 20;

    cout << "num 1 == num 2: " << (num1 == num2) << endl;
    cout << "num 1 != num 2: " << (num1 != num2) << endl;
    cout << "num 1 > num 2: " << (num1 > num2) << endl;
    cout << "num 1 >= num 2: " << (num1 >= num2) << endl;
    cout << "num 1 < num 2: " << (num1 < num2) << endl;
    cout << "num 1 <= num 2: " << (num1 <= num2) << endl;

    cout << endl
         << endl;

    return 0;
}