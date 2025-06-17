#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();

    int number = 0, sumNumbers = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Please, enter a number: ";
        cin >> number;

        // if (number <= 50)
        // {
        //     sumNumbers += number;
        // }

        if (number > 50)
        {
            cout << "The number is greater than 50 and won't be calculated." << endl;
            continue;
        }

        sumNumbers += number;
    }

    cout << "Sum Numbers: " << sumNumbers << endl;

    cout << endl
         << endl;

    return 0;
}