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

    int myArray[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};

    for (int i = 0; i < 10; i++)
    {
        cout << "We are at iteration " << i + 1 << endl;
        if (myArray[i] == 20)
        {
            cout << "Found number " << myArray[i] << " in index " << i << endl;
        }
    }
    cout << "*******************************************" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "We are at iteration " << i + 1 << endl;
        if (myArray[i] == 20)
        {
            cout << "Found number " << myArray[i] << " in index " << i << endl;
            break;
        }
    }

    cout << endl
         << endl;

    return 0;
}