#include <iostream>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    int myArr[5] = {10, 20, 30, 40, 50};
    int *ptr_myArr = myArr;

    //* ptr is equivalent to &arr[0];
    //* ptr + 1 is equivalent to &arr[1];
    //* ptr + 2 is equivalent to &arr[2];
    //* ptr + 3 is equivalent to &arr[3];

    cout << "Addresses are:\n";
    cout << ptr_myArr << endl;
    cout << ptr_myArr + 1 << endl;
    cout << ptr_myArr + 2 << endl;
    cout << ptr_myArr + 3 << endl;
    cout << ptr_myArr + 4 << endl;

    cout << "\nValues are: \n";
    cout << *(ptr_myArr) << endl;
    cout << *(ptr_myArr + 1) << endl;
    cout << *(ptr_myArr + 2) << endl;
    cout << *(ptr_myArr + 3) << endl;
    cout << *(ptr_myArr + 4) << endl;

    cout << "\nValues are: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr_myArr + i) << endl;
    }

    cout << endl
         << endl;

    return 0;
}