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
    string driverLicense;

    cout << "Please, enter your age: ";
    cin >> age;

    cout << "Do you have a driving license( yes OR no): ";
    cin >> driverLicense;

    if (age > 21 && driverLicense == "yes")
    {
        cout << "\nHired" << endl;
    }
    else
    {
        cout << "\nRejected" << endl;
    }

    cout << endl
         << endl;

    return 0;
}