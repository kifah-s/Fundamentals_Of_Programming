#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    // int const length = 10;

    // int numbers[length] = {};

    // // Initialize data.
    // for (int i = 0; i < length; i++)
    // {
    //     numbers[i] = i + 1;
    // }
    
    // // Print data.
    // for (int i = 0; i < length; i++)
    // {
    //     cout << numbers[i] << endl;
    // }
    

    //* ---------------------------------------

    //* Dynamic array.

    int length = 0;

    cout << "Please, enter array length: ";
    cin >> length;

    int *numbers = new int[length];

    // Initialize data.
    for (int i = 0; i < length; i++)
    {
        numbers[i] = i + 1;
    }
    
    // Print data.
    for (int i = 0; i < length; i++)
    {
        cout << numbers[i] << endl;
    }

    delete[] numbers;

    cout << endl
         << endl;

    return 0;
}