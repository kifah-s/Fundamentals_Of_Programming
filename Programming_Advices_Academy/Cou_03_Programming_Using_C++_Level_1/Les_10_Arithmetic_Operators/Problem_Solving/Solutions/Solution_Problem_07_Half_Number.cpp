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

    int number = 0, halfNumber = 0;

    cout << "Please, enter a number: ";
    cin >> number;

    halfNumber = number / 2;

    cout << "\nHalf of " << number << " is " << halfNumber << endl; 

    cout << endl
         << endl;

    return 0;
}