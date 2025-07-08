#include <iostream>

using namespace std;

//* Structs
struct stNumbers
{
    int num1;
    int num2;
};

//* End Structs

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stNumbers swapNumbers(stNumbers n)
{
    int temp = 0;

    temp = n.num1;
    n.num1 = n.num2;
    n.num2 = temp;

    return n;
}

//* End Functions

int main()
{
    welcomeMessage();

    stNumbers nums;

    cout << "Please, enter num 1: ";
    cin >> nums.num1;

    cout << "Please, enter num 2: ";
    cin >> nums.num2;

    cout << "\nBefor Swap:" << endl;
    cout << "Num 1: " << nums.num1 << endl;
    cout << "Num 2: " << nums.num2 << endl;

    // cout << "\nAfter Swap:" << endl;
    // cout << "Num 1: " << swapNumbers(nums).num1 << endl;
    // cout << "Num 2: " << swapNumbers(nums).num2 << endl;

    nums = swapNumbers(nums);
    cout << "\nAfter Swap:" << endl;
    cout << "Num 1: " << nums.num1 << endl;
    cout << "Num 2: " << nums.num2 << endl;

    cout << endl
         << endl;

    return 0;
}