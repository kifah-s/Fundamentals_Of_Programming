#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int getNumberFun()
{
    int num = 0;

    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

void checkNumberEvenOrOddFun(int num)
{
    if (num % 2 == 0)
    {
        cout << "Number " << num << " is Even." << endl;
    }
    else
    {
        cout << "Number " << num << " is Odd." << endl;
    }
}

//* End Functions

int main()
{
    welcomeMessageFun();
    checkNumberEvenOrOddFun(getNumberFun());

    cout << endl
         << endl;

    return 0;
}