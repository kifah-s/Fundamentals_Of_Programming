#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    short age = 0;

    cout << "Please enter a age: ";
    cin >> age;

    if (age >= 18 && age <= 45)
    {
        cout << "\nValid Age" << endl;
    }
    else
    {
        cout << "\nInvalid Age" << endl;
    }

    cout << endl
         << endl;

    return 0;
}