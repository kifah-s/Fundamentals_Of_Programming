#include <iostream>
#include <cstdlib>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}

void AddArrayElements(int arr[100], int &arrLen, int num)
{
    arr[arrLen] = num;
    arrLen++;
}

bool IsDistinctNumber(int num, int arr[10], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (num == arr[i])
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
        if (IsDistinctNumber(arr1[i], arr2, arr2Length))
        {
            AddArrayElements(arr2, arr2Length, arr1[i]);
        }
    }
}

int main()
{
    WelcomeMessage();

    int array1[] = {10, 10, 10, 50, 50, 70, 70, 70, 70, 90}, array1Length = 10;
    int array2[100], array2Length = 0;

    cout << "\nArray 1: ";
    PrintArray(array1, array1Length);

    CopyArray(array1, array2, array1Length, array2Length);

    cout << "\nArray 2 - Distinct  Numbers: ";
    PrintArray(array2, array2Length);

    cout << endl
         << endl;

    return 0;
}