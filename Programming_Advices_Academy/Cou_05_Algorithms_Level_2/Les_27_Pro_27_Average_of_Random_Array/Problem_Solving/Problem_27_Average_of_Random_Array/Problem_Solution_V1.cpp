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
    cout << "\nArray Elements: ";
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}

float AverageNumbersInArray(int arr[100], int arrLength)
{
    int sumNum = 0;

    for (int i = 1; i < arrLength; i++)
    {
        sumNum += arr[i];
    }

    return (float)sumNum / arrLength;
}

int main()
{
    WelcomeMessage();

    srand((unsigned)time(NULL));

    int array[100], arrayLength = 0;

    FillArrayWithRandomNumber(array, arrayLength);
    PrintArray(array, arrayLength);
    cout << "\nAverage Numbers: " << AverageNumbersInArray(array, arrayLength);

    cout << endl
         << endl;

    return 0;
}