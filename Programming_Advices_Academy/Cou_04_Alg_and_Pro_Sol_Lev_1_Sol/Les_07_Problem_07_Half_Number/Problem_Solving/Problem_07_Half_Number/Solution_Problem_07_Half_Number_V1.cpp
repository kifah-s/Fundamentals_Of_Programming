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

int calculateHalfNumberFun(int num)
{
    return num / 2;
}

void printResultFun(int halfNum)
{
    cout << "Half number: " << halfNum << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();
    printResultFun(calculateHalfNumberFun(getNumberFun()));

    cout << endl
         << endl;

    return 0;
}