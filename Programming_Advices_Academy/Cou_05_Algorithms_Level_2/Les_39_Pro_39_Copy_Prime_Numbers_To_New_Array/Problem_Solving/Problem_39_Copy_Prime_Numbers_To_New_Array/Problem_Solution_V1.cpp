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

void FillArrayWithRandomNumber(int arr[100], int &arrLength)
{
    cout << "Please, Enter number of elements: ";
    cin >> arrLength;

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

void AddArrayElements(int array[100], int &arrayLength, int number)
{
    array[arrayLength] = number;
    arrayLength++;
}

bool IsOddNumber(int number)
{
    if (number % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsPrimeNumber(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

void CopyArray(int arr1[100], int arr2[100], int arr1Length, int &arr2Length)
{
    for (int i = 0; i < arr1Length; i++)
    {
        if (IsPrimeNumber(arr1[i]))
        {
            AddArrayElements(arr2, arr2Length, arr1[i]);
        }
    }
}

int main()
{
    WelcomeMessage();

    srand((unsigned)time(NULL));

    int array1[100], array2[100], array1Length = 0, array2Length = 0;

    FillArrayWithRandomNumber(array1, array1Length);

    cout << "\nArray 1: ";
    PrintArray(array1, array1Length);

    CopyArray(array1, array2, array1Length, array2Length);

    cout << "\nArray 2 - Prime Numbers: ";
    PrintArray(array2, array2Length);

    cout << endl
         << endl;

    return 0;
}