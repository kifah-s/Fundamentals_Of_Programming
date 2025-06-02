#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

// void myFunction(int num1) //* By Value.
// {
//     num1 = 7000;
//     cout << "Number inside my function: " << num1 << endl;
// }

void myFunction(int &num1) //* By Reference.
{
    num1 = 7000;
    cout << "Number inside my function: " << num1 << endl;
}
//* End Functions

int main()
{
    welcomeMessage();

    int num1 = 1000;

    myFunction(num1);

    cout << "Number after calling my function: " << num1 << endl;
    cout << "Reference num 1: " << &num1 << endl;

    cout << endl
         << endl;

    return 0;
}