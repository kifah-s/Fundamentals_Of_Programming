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

int ReadNumberToCount()
{
    int num = 0;
    cout << "\nPlease, enter a number to count in matrix: ";
    cin >> num;

    return num;
}

int CountNumberInMatrix(int matrix[3][3], short rows, short cols, int numberToCount)
{
    int counter = 0;

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (matrix[i][j] == numberToCount)
            {
                counter++;
            }
        }
    }

    return counter;
}

int main()
{
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    WelcomeMessage();

    int const rows = 3, cols = 3;
    int matrix[rows][cols];
    int numberToCount = 0, numberInMatrix = 0;

    FillMatrixWithRandomNumbers(matrix, rows, cols);
    cout << "\nMatrix:" << endl;
    PrintMatrix(matrix, rows, cols);

    numberToCount = ReadNumberToCount();
    numberInMatrix = CountNumberInMatrix(matrix, rows, cols, numberToCount);
    cout << "Number " << numberToCount << " count in matrix is: " << numberInMatrix << endl;

    cout << endl
         << endl;

    return 0;
}