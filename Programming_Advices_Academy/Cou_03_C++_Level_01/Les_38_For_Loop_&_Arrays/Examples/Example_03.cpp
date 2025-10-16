#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

void readArrayDataFun(int arr1[100], int &len)
{
    cout << "How many numbers do you want to enter (1 to 100): ";
    cin >> len;

    for (int i = 0; i < len; i++)
    {
        cout << "Please, enter number " << i + 1 << ": ";
        cin >> arr1[i];
    }
}

void printArrayDataFun(int arr1[100], int len)
{
    cout << "\n****************************" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << "Number " << i + 1 << ": " << arr1[i] << endl;
    }
    cout << "****************************" << endl;
}

int calculateArraySumFun(int arr1[100], int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += arr1[i];
    }

    return sum;
}

//* End Functions

int main()
{
    welcomeMessageFun();

    int array1[100], length = 0;
    float sum = 0;

    readArrayDataFun(array1, length);
    printArrayDataFun(array1, length);

    sum = calculateArraySumFun(array1, length);

    cout << "Sum: " << sum << endl;
    cout << "Average: " << (float)sum / length << endl;

    cout << endl
         << endl;

    return 0;
}