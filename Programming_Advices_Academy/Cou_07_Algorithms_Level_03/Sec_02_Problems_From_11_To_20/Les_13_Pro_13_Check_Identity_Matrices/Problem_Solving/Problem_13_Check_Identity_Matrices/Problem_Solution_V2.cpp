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

bool CheckMatricesIdentity(int matrix[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            // check for diagonals element
            if (i == j && matrix[i][j] != 1)
            {
                return false;
            }
            // check for rest elements
            else if (i != j && matrix[i][j] != 0)
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
    int matrix[rows][cols] = {{1, 0, 0},
                              {0, 1, 0},
                              {0, 0, 1}};

    cout << "\nMatrix 1:" << endl;
    PrintMatrix(matrix, rows, cols);

    if (CheckMatricesIdentity(matrix, rows, cols))
    {
        cout << "\nYes: Matrices Is Identity." << endl;
    }
    else
    {
        cout << "\nNo: Matrices Is Not Identity." << endl;
    }

    cout << endl
         << endl;

    return 0;
}