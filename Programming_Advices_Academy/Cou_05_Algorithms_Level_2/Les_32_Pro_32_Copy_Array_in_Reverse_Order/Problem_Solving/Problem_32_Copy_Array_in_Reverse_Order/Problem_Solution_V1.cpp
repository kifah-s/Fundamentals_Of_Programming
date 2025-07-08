#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int GenerateRandomNumber(int from, int to)
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

void FillArrayWithRandomNumbers(int array[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        array[i] = GenerateRandomNumber(1, 100);
    }
}

void PrintArray(int array[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << array[i] << " ";
    }
}

void CopyArrayInReverseOrder(int array1[100], int array2[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        array2[i] = array1[arrayLength - 1 - i];
    }
}

void PrintResult()
{
    srand((unsigned)time(NULL));

    int array1[100],array2[100], arrayLength = 0;

    arrayLength = ReadPositiveNumber("Please, enter the number of elements you want: ");
    FillArrayWithRandomNumbers(array1, arrayLength);

    cout << "\nArray 1: ";
    PrintArray(array1, arrayLength);

    CopyArrayInReverseOrder(array1, array2, arrayLength);

    cout << "\nArray 2 after coping array 1 in reversed order: ";
    PrintArray(array2, arrayLength);
}

int main()
{
    WelcomeMessage();
    PrintResult();

    cout << endl
         << endl;

    return 0;
}