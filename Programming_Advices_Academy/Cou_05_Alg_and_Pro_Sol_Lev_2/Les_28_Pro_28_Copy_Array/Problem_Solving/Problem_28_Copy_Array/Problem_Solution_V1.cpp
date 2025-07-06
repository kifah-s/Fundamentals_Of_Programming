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

void CopyArray(int arr1[100], int arr2[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr2[i] = arr1[i];
    }
}

int main()
{
    WelcomeMessage();

    srand((unsigned)time(NULL));

    int array1[100], array2[100], arrayLength = 0;

    FillArrayWithRandomNumber(array1, arrayLength);

    cout << "\nArray 1: ";
    PrintArray(array1, arrayLength);

    CopyArray(array1, array2, arrayLength);

    cout << "\nArray 2: ";
    PrintArray(array2, arrayLength);

    cout << endl
         << endl;

    return 0;
}