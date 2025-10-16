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

stNumbers readNumbersFun()
{
    stNumbers numbers;

    cout << "Please, enter number 1: ";
    cin >> numbers.num1;

    cout << "Please, enter number 2: ";
    cin >> numbers.num2;
    
    cout << "Please, enter number 3: ";
    cin >> numbers.num3;

    return numbers;
}

int findMaximumNumbersFun(stNumbers numbers)
{
    if (numbers.num1 > numbers.num2 && numbers.num1 > numbers.num3)
    {
        return numbers.num1;
    }
    else if (numbers.num2 > numbers.num1 && numbers.num2 > numbers.num3)
    {
        return numbers.num2;
    }
    else
    {
        return numbers.num3;
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

    printMaximumNumbersFun(findMaximumNumbersFun(readNumbersFun()));

    cout << endl
         << endl;

    return 0;
}