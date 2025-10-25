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

    //* Size of array.

    // int arr[] = {2, 6, 9, 5, 8, 1};

    // int size = sizeof(arr) / sizeof(arr[0]);

    // cout << "Size of arr: " << size << endl;

    //* ------------------------------------------------

    // int arr[] = {2, 6, 9, 5, 8, 1};

    // int size = sizeof(arr) / sizeof(int);

    // cout << "Size of arr: " << size << endl;
    
    //* ------------------------------------------------

    string arr[] = {"kifah", "saloum"};

    int size = sizeof(arr) / sizeof(string);

    cout << "Size of arr: " << size << endl;

    cout << endl
         << endl;

    return 0;
}