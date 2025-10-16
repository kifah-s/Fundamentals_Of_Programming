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

void fromOneToNumber(int num)
{
    // for (int i = 1; i <= num; i++)
    // {
    //     cout << i << endl;
    // }

    int i = 1;
    while (i <= num)
    {
        cout << i << endl;
        i++;
    }
}

//* End Functions

int main()
{
    int number = 0;

    welcomeMessage();
    number = getNumber();
    fromOneToNumber(number);

    cout << endl
         << endl;

    return 0;
}