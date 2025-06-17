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

int sumNumbersFun()
{
    int sumNum = 0;

    int num = getNumberFun();

    while (num != -99)
    {
        sumNum += num;
        num = getNumberFun();
    }

    return sumNum;
}

//* End Functions

int main()
{
    int sumNumbers = 0;

    welcomeMessageFun();
    
    sumNumbers = sumNumbersFun();

    cout << "Sum Numbers: " << sumNumbers << endl;

    cout << endl
         << endl;

    return 0;
}