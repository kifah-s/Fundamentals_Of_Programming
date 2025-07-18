#include <iostream>
#include <cstdlib>

using namespace std;

enum enPalindromeArray
{
    palindromeArray = 1,
    notPalindromeArray = 2
};

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void FillArray(int arr[100], int &arrLength)
{
    arrLength = 6;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}

enPalindromeArray IsPalindromeArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] != arr[arrLength - 1 - i])
        {
            return enPalindromeArray::notPalindromeArray;
        }
    }

    return enPalindromeArray::palindromeArray;
}

int main()
{
    WelcomeMessage();

    int array[100], arrayLength = 0;

    FillArray(array, arrayLength);

    cout << "\nArray: ";
    PrintArray(array, arrayLength);

    if (IsPalindromeArray(array, arrayLength) == enPalindromeArray::palindromeArray)
    {
        cout << "\n\nYes Array is Palindrome." << endl;
    }
    else
    {
        cout << "\n\nNo Array is Not Palindrome." << endl;
    }

    cout << endl
         << endl;

    return 0;
}