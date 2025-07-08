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

bool IsPrime(int number)
{
    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int CopyPrimeNumbers(int arr[100], int arrPriNums[100], int arrLength)
{
    int primeIndex = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (IsPrime(arr[i]))
        {
            arrPriNums[primeIndex] = arr[i];
            primeIndex++;
        }
    }

    return primeIndex;
}

int main()
{
    WelcomeMessage();

    srand((unsigned)time(NULL));

    int array[100], arrayPrimeNumbers[100], arrayLength = 0, arrayPrimeNumberLength = 0;

    FillArrayWithRandomNumber(array, arrayLength);

    cout << "\nArray 1: ";
    PrintArray(array, arrayLength);

    arrayPrimeNumberLength = CopyPrimeNumbers(array, arrayPrimeNumbers, arrayLength);

    cout << "\nPrime Numbers in array 2: ";
    PrintArray(arrayPrimeNumbers, arrayPrimeNumberLength);

    cout << endl
         << endl;

    return 0;
}