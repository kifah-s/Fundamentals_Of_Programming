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

int AddingArrayElements(int matrix[3][3], short rows, short cols)
{
    int sum = 0;

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}

bool CheckMatricesTypical(int matrix_1[3][3], int matrix_2[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (matrix_1[i][j] != matrix_2[i][j])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    WelcomeMessage();

    int const rows = 3, cols = 3;
    int matrix_1[rows][cols], matrix_2[rows][cols];

    FillMatrixWithRandomNumbers(matrix_1, rows, cols);
    cout << "\nMatrix 1:" << endl;
    PrintMatrix(matrix_1, rows, cols);

    FillMatrixWithRandomNumbers(matrix_2, rows, cols);
    cout << "\nMatrix 2:" << endl;
    PrintMatrix(matrix_2, rows, cols);

    if (CheckMatricesTypical(matrix_1, matrix_2, rows, cols))
    {
        cout << "\nYes: Matrices Is Typical." << endl;
    }
    else
    {
        cout << "\nNo: Matrices Is Not Typical." << endl;
    }

    cout << endl
         << endl;

    return 0;
}