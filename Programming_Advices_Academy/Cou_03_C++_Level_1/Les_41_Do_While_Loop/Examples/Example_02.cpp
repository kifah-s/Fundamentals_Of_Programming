#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

int readIntNumberInRange(int from, int to)
{
    int number = 0;

    do
    {
        cout << "Please enter a number between " << from << " and " << to << ": ";
        cin >> number;
    } while (number < from || number > to);

    return number;
}

//* End Functions

int main()
{
    int number = 0;

    welcomeMessageFun();

    number = readIntNumberInRange(10, 20);
    cout << "Your entered number: " << number << endl;

    cout << endl
         << endl;

    return 0;
}