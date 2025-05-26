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

    short num_1 = 10, num_2 = 20;

    cout << "Num 1 + Num 2 = " << num_1 + num_2 << endl;
    cout << "Num 2 - Num 1 = " << num_2 - num_1 << endl;
    cout << "Num 1 * Num 2 = " << num_1 * num_2 << endl;
    cout << "Num 2 / Num 1 = " << num_2 / num_1 << endl;
    cout << "Num 2 % Num 1 = " << num_2 % num_1 << endl;

    cout << endl
         << endl;

    return 0;
}