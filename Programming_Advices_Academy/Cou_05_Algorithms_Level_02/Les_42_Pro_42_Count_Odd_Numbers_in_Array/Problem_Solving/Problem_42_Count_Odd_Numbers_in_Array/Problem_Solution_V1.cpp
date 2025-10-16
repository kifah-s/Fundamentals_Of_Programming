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

int CountOddNumbersInArray(int arr[100], int arrLength)
{
    int counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (IsOddNumber(arr[i]))
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

    cout << "\n\nOdd numbers count is: " << CountOddNumbersInArray(array, arrayLength) << endl;

    cout << endl
         << endl;

    return 0;
}