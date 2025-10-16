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

void CountNumberAndCountZer(int matrix[3][3], short rows, short cols, int &countZero)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                countZero++;
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

    int matrix[rows][cols] = {{0, 0, 2},
                              {0, 0, 4},
                              {0, 0, 6}};

    int countZero = 0;

    cout << "\nMatrix:" << endl;
    PrintMatrix(matrix, rows, cols);

    CountNumberAndCountZer(matrix, rows, cols, countZero);

    if (countZero > 9 / 2)
    {
        cout << "\nYes: It Is Sparse." << endl;
    }
    else
    {
        cout << "\nNo: It Is Not Sparse." << endl;
    }

    cout << endl
         << endl;

    return 0;
}