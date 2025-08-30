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

void FillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            matrix[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int matrix[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            cout << setfill('0') << setw(2) << matrix[i][j] << "\t";
            // printf("%0*d\t", 2, matrix[i][j]);
        }
        cout << "\n";
    }
}

void PrintMiddleRowOfMatrix(int matrix[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (i == 1)
            {
                cout << setfill('0') << setw(2) << matrix[i][j] << "\t";
                // printf("%0*d\t", 2, matrix[i][j]);
            }
        }
        // cout << "\n";
    }
}

void PrintMiddleColOfMatrix(int matrix[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (j == 1)
            {
                cout << setfill('0') << setw(2) << matrix[i][j] << "\t";
                // printf("%0*d\t", 2, matrix[i][j]);
            }
        }
        // cout << "\n";
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    WelcomeMessage();

    int const rows = 3, cols = 3;
    int matrix[rows][cols];

    FillMatrixWithRandomNumbers(matrix, rows, cols);
    cout << "\nMatrix:" << endl;
    PrintMatrix(matrix, rows, cols);

    cout << "\nMiddle Row of Matrix:" << endl;
    PrintMiddleRowOfMatrix(matrix, rows, cols);

    cout << "\n\nMiddle Col of Matrix:" << endl;
    PrintMiddleColOfMatrix(matrix, rows, cols);

    cout << endl
         << endl;

    return 0;
}