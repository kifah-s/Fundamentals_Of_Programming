#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <string>
#include <iomanip>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int RandomNumber(int from, int to)
{
    // Function to generate a random number.
    int randNum = rand() % (to - from + 1) + from;

    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            cout << setw(3) << arr[i][j] << "     ";
        }
        cout << "\n";
    }
}

int ColSum(int arr[3][3], short rows, short colNumbers)
{
    int sum = 0;

    for (short i = 0; i <= rows - 1; i++)
    {
        sum += arr[i][colNumbers];
    }

    return sum;
}

void AddEachColSumToAdditionArray(int arr[3][3], short rows, short cols, int addArr[3])
{
    for (short i = 0; i < rows; i++)
    {
        addArr[i] = ColSum(arr, rows, i);
    }
}

void PrintAdditionArray(int addArr[3], short rows)
{
    cout << "\nThe the following are the sum of each row in the matrix:\n";
    for (short i = 0; i < rows; i++)
    {
        cout << " Col " << i + 1 << " Sum = " << addArr[i] << endl;
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    WelcomeMessage();

    int array[3][3], additionArray[3];

    FillMatrixWithRandomNumbers(array, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:" << endl;
    PrintMatrix(array, 3, 3);

    AddEachColSumToAdditionArray(array, 3, 3, additionArray);

    PrintAdditionArray(additionArray, 3);

    cout << endl
         << endl;

    return 0;
}