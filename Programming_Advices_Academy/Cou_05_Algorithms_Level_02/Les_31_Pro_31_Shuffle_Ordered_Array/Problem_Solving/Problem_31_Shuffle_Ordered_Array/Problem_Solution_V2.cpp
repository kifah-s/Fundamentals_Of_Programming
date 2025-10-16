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

void FillArrayWith1ToN(int array[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        array[i] = i + 1;
    }
}

void PrintArray(int array[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << array[i] << " ";
    }
}

void SwapNumbers(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void ShuffleElements(int array[100], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        SwapNumbers(array[GenerateRandomNumber(1, arrayLength) - 1], array[GenerateRandomNumber(1, arrayLength) - 1]);
    }
}

void PrintResult()
{
    srand((unsigned)time(NULL));

    int array[100], arrayLength = 0;

    arrayLength = ReadPositiveNumber("Please, enter the number of elements you want: ");
    FillArrayWith1ToN(array, arrayLength);

    cout << "\nArray elements before shuffle: ";
    PrintArray(array, arrayLength);

    ShuffleElements(array, arrayLength);

    cout << "\nArray elements after shuffle: ";
    PrintArray(array, arrayLength);
}

int main()
{
    WelcomeMessage();
    PrintResult();

    cout << endl
         << endl;

    return 0;
}