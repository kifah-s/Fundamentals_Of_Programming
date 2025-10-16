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

    // int num1 = 10;
    // int *ptr_num1 = &num1;
    // cout << "ptr num 1: " << ptr_num1 << endl;
    // cout << "ptr num 1: " << *ptr_num1 << endl;

    //* -------------------------------------------------

    int num_1 = 10;
    cout << "num 1 (Value): " << num_1 << endl;
    cout << "num 1 (Address): " << &num_1 << endl;

    int *ptr_num_1 = &num_1;
    cout << "ptr num 1 (Value): " << ptr_num_1 << endl;
    cout << "num 1 (Value): " << *ptr_num_1 << endl;

    num_1 = 20;
    cout << "num 1 (Value): " << num_1 << endl;
    cout << "num 1 (Value): " << *ptr_num_1 << endl;

    *ptr_num_1 = 30;
    cout << "num 1 (Value): " << num_1 << endl;
    cout << "num 1 (Value): " << *ptr_num_1 << endl;

    cout << endl
         << endl;

    return 0;
}