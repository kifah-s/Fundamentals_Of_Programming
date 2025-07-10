#include <iostream>
#include <cstdlib>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void FillArray(int arr[100], int &arrLength)
{
    arrLength = 10;

    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}

short FindNumberPositionInArray(int number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == number)
        {
            return i;
        }
    }

    return -1;
}

bool IsNumberInArray(int number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(number, arr, arrLength) != -1;
}

void AddArrayElements(int arr[100], int &arrLen, int num)
{
    arr[arrLen] = num;
    arrLen++;
}

void CopyArray(int arr1[100], int arr2[100], int arr1Length, int &arr2Length)
{
    for (int i = 0; i < arr1Length; i++)
    {
        if (!IsNumberInArray(arr1[i], arr2, arr2Length))
        {
            AddArrayElements(arr2, arr2Length, arr1[i]);
        }
    }
}

int main()
{
    WelcomeMessage();

    int array1[100], array1Length = 0;
    int array2[100], array2Length = 0;

    FillArray(array1, array1Length);

    cout << "\nArray 1: ";
    PrintArray(array1, array1Length);

    CopyArray(array1, array2, array1Length, array2Length);

    cout << "\nArray 2 - Distinct  Numbers: ";
    PrintArray(array2, array2Length);

    cout << endl
         << endl;

    return 0;
}