#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int getNumber()
{
    int num = 0;

    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

void fromNumberToOne(int num)
{
    // for (int i = num; i >= 1; i--)
    // {
    //     cout << i << endl;
    // }

    int i = num;
    while (i >= 1)
    {
        cout << i << endl;
        i--;
    }
}

//* End Functions

int main()
{
    int number = 0;

    welcomeMessage();
    number = getNumber();
    fromNumberToOne(number);

    cout << endl
         << endl;

    return 0;
}