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

short CountNumberInMatrix(int matrix[3][3], int number, short rows, short cols)
{
    short numberCount = 0;

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (matrix[i][j] == number)
            {
                numberCount++;
            };
        }
    }
    
    return numberCount;
}

bool IsSparseMatrix(int matrix[3][3], short rows, short cols)
{
    short matrixSize = rows * cols;

    return (CountNumberInMatrix(matrix, 0, 3, 3) >= ceil((float)matrixSize / 2));
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    WelcomeMessage();

    int const rows = 3, cols = 3;

    int matrix[rows][cols] = {{0, 0, 2},
                              {0, 0, 4},
                              {0, 0, 6}};

    int countNumber = 0, countZero = 0;

    cout << "\nMatrix:" << endl;
    PrintMatrix(matrix, rows, cols);

    if (IsSparseMatrix(matrix, 3, 3))
    {
        cout << "\nYes: It is Sparse\n";
    }
    else
    {
        cout << "\nNo: It's NOT Sparse\n";
    }
    
    cout << endl
         << endl;

    return 0;
}