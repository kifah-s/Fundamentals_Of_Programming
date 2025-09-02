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

bool IsNumberInMatrix(int matrix[3][3], short rows, short cols, int number)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (matrix[i][j] == number)
            {
                return true;
            }
        }
    }

    return false;
}

void PrintIntersectedNumbers(int matrix_1[3][3], int matrix_2[3][3], short rows, short cols)
{
    int number = 0;

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            number = matrix_1[i][j];

            if (IsNumberInMatrix(matrix_2, rows, cols, number))
            {
                cout << matrix_1[i][j] << "\t";
            }
        }
    }
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    WelcomeMessage();

    int const rows = 3, cols = 3;
    int matrix_1[rows][cols] = {{77, 5, 12},
                                {22, 20, 1},
                                {1, 0, 9}};

    int matrix_2[rows][cols] = {{5, 80, 90},
                                {22, 77, 1},
                                {10, 8, 33}};
    int number = 0;

    cout << "\nMatrix 1:" << endl;
    PrintMatrix(matrix_1, rows, cols);

    cout << "\nMatrix 2:" << endl;
    PrintMatrix(matrix_2, rows, cols);

    cout << "\nIntersected Number Are: ";
    PrintIntersectedNumbers(matrix_1, matrix_2, rows, cols);

    cout << endl
         << endl;

    return 0;
}