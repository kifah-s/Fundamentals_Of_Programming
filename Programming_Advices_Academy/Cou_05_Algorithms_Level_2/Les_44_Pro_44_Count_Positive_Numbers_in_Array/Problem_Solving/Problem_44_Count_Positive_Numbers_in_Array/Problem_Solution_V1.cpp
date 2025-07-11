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
        arr[i] = RandomNumber(-100, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}

bool IsPositiveNumber(int number)
{
    if (number >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int CountPositiveNumbersInArray(int arr[100], int arrLength)
{
    int counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (IsPositiveNumber(arr[i]))
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    WelcomeMessage();

    srand((unsigned)time(NULL));

    int array[100], arrayLength = 0;

    FillArrayWithRandomNumber(array, arrayLength);

    cout << "\nArray: ";
    PrintArray(array, arrayLength);

    cout << "\n\nPositive numbers count is: " << CountPositiveNumbersInArray(array, arrayLength) << endl;

    cout << endl
         << endl;

    return 0;
}