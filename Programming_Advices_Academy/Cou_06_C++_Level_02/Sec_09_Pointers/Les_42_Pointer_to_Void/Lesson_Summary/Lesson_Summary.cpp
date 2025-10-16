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

    // int num = 10;
    // int *ptr = &num;

    //* -------------------

    // float num = 10.5;
    // int *ptr = &num; //* Error

    //* -------------------

    // float num = 10.5;
    // void *ptr = &num;

    // cout << ptr << endl;
    // cout << *(static_cast<float *>(ptr)) << endl;

    //* -------------------

    int num = 10;
    void *ptr = &num;

    cout << ptr << endl;
    cout << *(static_cast<int *>(ptr)) << endl;

    cout << endl
         << endl;

    return 0;
}