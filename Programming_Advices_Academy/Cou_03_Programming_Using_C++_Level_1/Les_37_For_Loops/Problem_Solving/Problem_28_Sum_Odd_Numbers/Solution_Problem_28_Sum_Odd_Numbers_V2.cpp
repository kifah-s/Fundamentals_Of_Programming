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

int sumOddNumbersFun(int num)
{
    int sumOdd = 0;

    for (int i = 1; i <= num; i = i + 2)
    {
        sumOdd += i;
    }

    return sumOdd;
}

//* End Functions

int main()
{
    int number = 0, sumOddNumbers = 0;

    welcomeMessage();
    number = getNumber();
    sumOddNumbers = sumOddNumbersFun(number);

    cout << "Sum Odd Numbers Form 1 To " << number << ": " << sumOddNumbers << endl;

    cout << endl
         << endl;

    return 0;
}