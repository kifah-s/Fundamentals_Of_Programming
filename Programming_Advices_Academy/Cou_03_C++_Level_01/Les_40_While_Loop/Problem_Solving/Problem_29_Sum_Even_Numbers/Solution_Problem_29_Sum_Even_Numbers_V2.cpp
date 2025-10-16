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

int sumEvenNumbersFun(int num)
{
    int sumEven = 0;

    // for (int i = 0; i <= num; i = i + 2)
    // {
    //     sumEven += i;
    // }

    int i = 0;
    while (i <= num)
    {
        sumEven += i;
        i = i + 2;
    }

    return sumEven;
}

//* End Functions

int main()
{
    int number = 0, sumEvenNumbers = 0;

    welcomeMessageFun();
    number = getNumberFun();
    sumEvenNumbers = sumEvenNumbersFun(number);

    cout << "Sum Even Numbers Form 1 To " << number << ": " << sumEvenNumbers << endl;

    cout << endl
         << endl;

    return 0;
}