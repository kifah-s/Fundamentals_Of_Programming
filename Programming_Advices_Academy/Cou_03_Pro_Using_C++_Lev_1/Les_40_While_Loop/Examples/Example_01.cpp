#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();

    int number = 0;

    cout << "Please, enter a positive number: ";
    cin >> number;

    while (number < 0)
    {
        cout << "Wrong number, Please enter a positive number: ";
        cin >> number;
    }

    cout << "The number your entered: " << number << endl;

    cout << endl
         << endl;

    return 0;
}