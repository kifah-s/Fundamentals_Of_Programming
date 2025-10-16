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
            matrix[i][j] = RandomNumber(1, 100);
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

int CheckMinimumNumber(int matrix[3][3], short rows, short cols)
{
    int minimumNumber = matrix[0][0];

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (matrix[i][j] < minimumNumber)
            {
                minimumNumber = matrix[i][j];
            }
        }
    }

    return minimumNumber;
}

int CheckMaximumNumber(int matrix[3][3], short rows, short cols)
{
    int maximumNumber = matrix[0][0];

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (matrix[i][j] > maximumNumber)
            {
                maximumNumber = matrix[i][j];
            }
        }
    }

    return maximumNumber;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    WelcomeMessage();

    int const rows = 3, cols = 3;
    int matrix_1[rows][cols];
    int minimumNumber = 0, maximumNumber = 0;

    FillMatrixWithRandomNumbers(matrix_1, rows, cols);

    cout << "Matrix 1:" << endl;
    PrintMatrix(matrix_1, rows, cols);

    minimumNumber = CheckMinimumNumber(matrix_1, rows, cols);
    maximumNumber = CheckMaximumNumber(matrix_1, rows, cols);

    cout << "\nMinimum Number is: " << minimumNumber << endl;
    cout << "Maximum Number is: " << maximumNumber << endl;

    cout << endl
         << endl;

    return 0;
}