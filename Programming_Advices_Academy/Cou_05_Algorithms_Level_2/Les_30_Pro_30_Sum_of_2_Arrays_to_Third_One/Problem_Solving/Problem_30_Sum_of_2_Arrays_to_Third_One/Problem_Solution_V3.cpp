#include <iostream>
#include <cstdlib>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;
}

int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

void FillArrayWithRandomNumber(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}

void SumOf2Arrays(int arr1[100], int arr2[100], int arr3[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
}

void PrintResult()
{
    srand((unsigned)time(NULL));

    int array1[100], array2[100], array3[100], arraysLength = 0;

    arraysLength = ReadPositiveNumber("Please, enter positive number: ");

    FillArrayWithRandomNumber(array1, arraysLength);
    FillArrayWithRandomNumber(array2, arraysLength);

    cout << "\nArray 1: ";
    PrintArray(array1, arraysLength);

    cout << "\nArray 2: ";
    PrintArray(array2, arraysLength);

    SumOf2Arrays(array1, array2, array3, arraysLength);

    cout << "\nSum of Array 1 and Array 2: ";
    PrintArray(array3, arraysLength);
}

int main()
{
    WelcomeMessage();
    PrintResult();

    cout << endl
         << endl;

    return 0;
}