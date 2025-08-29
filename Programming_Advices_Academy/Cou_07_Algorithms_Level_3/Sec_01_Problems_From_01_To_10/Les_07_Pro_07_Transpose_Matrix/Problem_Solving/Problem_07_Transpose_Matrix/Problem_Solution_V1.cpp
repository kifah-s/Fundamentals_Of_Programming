#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void FileMatrixWithOrderedNumbers(int matrix[3][3], int rows, int cols)
{
    int counter = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            counter++;
            matrix[i][j] = counter;
        }
    }
}

void TransposeMatrix(int matrix[3][3], int transMatrix[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transMatrix[j][i] = matrix[i][j];
        }
    }
}

void PrintMatrix(int matrix[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    WelcomeMessage();

    int const rows = 3, cols = 3;
    int matrix[rows][cols], transposeMatrix[rows][cols];

    FileMatrixWithOrderedNumbers(matrix, rows, cols);

    cout << "The following is a 3x3 ordered matrix:" << endl;
    PrintMatrix(matrix, rows, cols);

    TransposeMatrix(matrix, transposeMatrix, rows, cols);

    cout << "The following is the transposed matrix:" << endl;
    PrintMatrix(transposeMatrix, rows, cols);

    cout << endl
         << endl;

    return 0;
}