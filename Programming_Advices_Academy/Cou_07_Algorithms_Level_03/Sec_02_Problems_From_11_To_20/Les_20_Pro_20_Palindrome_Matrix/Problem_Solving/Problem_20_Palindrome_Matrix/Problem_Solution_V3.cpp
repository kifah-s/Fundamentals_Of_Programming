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

bool IsPalindromeMatrix(int matrix[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols / 2; j++)
        {
            if (matrix[i][j] != matrix[i][cols - 1 - j])
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
    int matrix_1[rows][cols] = {{1, 2, 1},
                                {5, 5, 5},
                                {7, 3, 7}};

    cout << "Matrix 1:" << endl;
    PrintMatrix(matrix_1, rows, cols);

    if (IsPalindromeMatrix(matrix_1, rows, cols))
    {
        cout << "\nYes, Matrix is palindrome." << endl;
    }
    else
    {
        cout << "\nNo, Matrix is not palindrome." << endl;
    }

    cout << endl
         << endl;

    return 0;
}