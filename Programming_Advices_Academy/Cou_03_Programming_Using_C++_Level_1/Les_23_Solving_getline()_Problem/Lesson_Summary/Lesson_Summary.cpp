#include <iostream>
#include <string>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    int number;
    string fullName;
    string country;

    cout << "Please, enter employ number: ";
    cin >> number;

    cout << "Please, enter employ name: ";
    cin.ignore(1, '\n'); //* Important.
    getline(cin, fullName);

    cout << "Please, enter employ country: ";
    cin >> country;

    cout << "\nEmploy number: " << number << endl;
    cout << "Employ name: " << fullName << endl;
    cout << "Employ country: " << country << endl;

    cout << endl
         << endl;

    return 0;
}