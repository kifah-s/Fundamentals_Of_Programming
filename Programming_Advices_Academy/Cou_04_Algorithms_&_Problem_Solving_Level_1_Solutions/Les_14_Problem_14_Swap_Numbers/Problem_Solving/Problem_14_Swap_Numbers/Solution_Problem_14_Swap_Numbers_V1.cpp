#include <iostream>

using namespace std;

//* Structs

struct stNumbers
{
    int firstNum = 0;
    int secondNum = 0;
};

//* End Structs

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stNumbers readNumbersFun()
{
    stNumbers numbers;

    cout << "Please, enter first number: ";
    cin >> numbers.firstNum;
    cout << "Please, enter second number: ";
    cin >> numbers.secondNum;

    return numbers;
}

stNumbers swapNumbers(stNumbers numbers)
{
    int temp = numbers.firstNum;
    numbers.firstNum = numbers.secondNum;
    numbers.secondNum = temp;

    return numbers;
}

void printResultFun(stNumbers numbers)
{
    cout << "\nBefore Swap:" << endl;
    cout << "First Number: " << numbers.firstNum << endl;
    cout << "Second Number: " << numbers.secondNum << endl;

    numbers = swapNumbers(numbers);

    cout << "\nAfter Swap:" << endl;
    cout << "First Number: " << numbers.firstNum << endl;
    cout << "Second Number: " << numbers.secondNum << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();
    printResultFun(readNumbersFun());

    cout << endl
         << endl;

    return 0;
}