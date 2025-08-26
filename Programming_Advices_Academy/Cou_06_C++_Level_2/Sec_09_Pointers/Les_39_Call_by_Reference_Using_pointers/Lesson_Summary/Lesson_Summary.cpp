#include <iostream>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

// void SwapFun_1(int &num_1, int &num_2)
// {
//     int temp = 0;

//     temp = num_1;
//     num_1 = num_2;
//     num_2 = temp;
// }

void SwapFun_2(int *num_1, int *num_2)
{
    int temp = 0;

    temp = *num_1;
    *num_1 = *num_2;
    *num_2 = temp;
}

int main()
{
    WelcomeMessage();

    // int a = 1, b = 2;

    // cout << "Befor Swap: " << endl;
    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

    // SwapFun_1(a, b);

    // cout << "\nAfter Swap: " << endl;
    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

    //* ------------------------------------------------

    int a = 1, b = 2;

    cout << "Befor Swap: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    SwapFun_2(&a, &b);

    cout << "\nAfter Swap: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << endl
         << endl;

    return 0;
}