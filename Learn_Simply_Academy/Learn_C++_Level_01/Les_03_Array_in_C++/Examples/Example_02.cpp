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

    //* Add element in array.

    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 0, index = 0;

    cout << "Array before editing: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Please, enter element: ";
    cin >> element;
    cout << "Please, enter index: ";
    cin >> index;

    if (index < 0 || index > size)
    {
        cout << "\nInvalid index." << endl;
    }
    else
    {
        for (int i = size; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        size++;
    }

    cout << "Array after editing: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << endl
         << endl;

    return 0;
}