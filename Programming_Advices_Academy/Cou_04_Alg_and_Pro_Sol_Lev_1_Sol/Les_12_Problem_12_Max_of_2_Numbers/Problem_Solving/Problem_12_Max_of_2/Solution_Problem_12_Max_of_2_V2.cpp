#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void readNumbersFun(int &num1, int &num2)
{
    cout << "Please, enter number 1: ";
    cin >> num1;

    cout << "Please, enter number 2: ";
    cin >> num2;
}

int findMaximumNumbersFun(int &num1, int &num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

void printMaximumNumbersFun(int max)
{
    cout << "\nMaximum Numbers: " << max << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();

    int number_1 = 0, number_2 = 0;

    readNumbersFun(number_1, number_2);
    printMaximumNumbersFun(findMaximumNumbersFun(number_1, number_2));

    cout << endl
         << endl;

    return 0;
}