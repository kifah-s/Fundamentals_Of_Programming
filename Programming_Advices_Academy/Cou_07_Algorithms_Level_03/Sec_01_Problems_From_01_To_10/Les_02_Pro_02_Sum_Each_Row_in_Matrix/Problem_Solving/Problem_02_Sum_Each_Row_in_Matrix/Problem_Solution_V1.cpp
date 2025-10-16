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

void SumOfEachRow(int arr[3][3], short rows, short cols)
{
    int sum = 0;

    for (short i = 0; i < rows; i++)
    {
        cout << "Row " << i + 1 << " Sum: ";
        for (short j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    WelcomeMessage();

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:" << endl;
    PrintMatrix(arr, 3, 3);

    cout << "\nThe following are the sum of each row in the matrix:" << endl;
    SumOfEachRow(arr, 3, 3);

    cout << endl
         << endl;

    return 0;
}