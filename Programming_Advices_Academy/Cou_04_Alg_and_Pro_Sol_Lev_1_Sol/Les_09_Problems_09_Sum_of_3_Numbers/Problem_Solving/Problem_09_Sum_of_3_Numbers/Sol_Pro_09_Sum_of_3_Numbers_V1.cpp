#include <iostream>

using namespace std;

//* Structs

struct stNumbers
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
};

//* End Structs

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stNumbers getNumbersFun()
{
    stNumbers numbers;

    cout << "Please, enter num 1: ";
    cin >> numbers.num1;
    cout << "Please, enter num 2: ";
    cin >> numbers.num2;
    cout << "Please, enter num 3: ";
    cin >> numbers.num3;

    return numbers;
}

int sumNumbersFun(stNumbers numbers)
{
    return numbers.num1 + numbers.num2 + numbers.num3;
}

void printResultFun(stNumbers numbers)
{
    cout << "\nSum Numbers: " << sumNumbersFun(numbers) << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();

    printResultFun(getNumbersFun());

    cout << endl
         << endl;

    return 0;
}