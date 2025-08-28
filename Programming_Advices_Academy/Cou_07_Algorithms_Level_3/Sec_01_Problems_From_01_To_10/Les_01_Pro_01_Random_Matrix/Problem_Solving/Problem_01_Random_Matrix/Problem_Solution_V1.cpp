#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <iomanip>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int RandomNumber()
{
    return (rand() % 100) + 1;
}

void Fill3x3ArrayWithRandomNumber(int myArr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            myArr[i][j] = RandomNumber();
        }
    }
}

void PrintArray(int myArr[3][3])
{
    WelcomeMessage();

    Fill3x3ArrayWithRandomNumber(myArr);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << myArr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{

    srand(time(0));

    int myArray[3][3];

    cout << "The following is a 3x3 random array: " << endl;
    PrintArray(myArray);

    cout << endl
         << endl;

    return 0;
}