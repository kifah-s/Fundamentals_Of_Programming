#include <iostream>
#include <limits>


using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int ReadNumber()
{
    int number = 0;

    cout << "Please enter a number: ";
    cin >> number;

    while (cin.fail())
    {
        //* User didn't input a number.
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid Number, enter a valid one: ";
        cin >> number;
    }

    return number;
}

int main()
{
    WelcomeMessage();

    int number = ReadNumber();
    cout << "Your Number is: " << number << endl;

    cout << endl
         << endl;

    return 0;
}