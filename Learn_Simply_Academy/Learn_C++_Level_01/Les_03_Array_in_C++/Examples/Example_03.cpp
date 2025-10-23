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

    //* Delete element in array.

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

    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            index = i;
        }
    }

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;

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