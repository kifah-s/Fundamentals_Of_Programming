#include <iostream>
#include <cstdlib>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int ReadPositiveNumber(string message)
{
    int num = 0;

    do
    {
        cout << message;
        cin >> num;
    } while (num <= 0);

    return num;
}

int GenerateRandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;
}

void FillArrayWithRandomNumber(int array[100], int numOfEle)
{
    for (int i = 0; i < numOfEle; i++)
    {
        array[i] = GenerateRandomNumber(1, 100);
    }
}

void PrintArray(int array[100], int numOfEle)
{
    cout << "\nArray Elements: ";

    for (int i = 0; i < numOfEle; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n"
         << endl;
}

bool FindNumberInArray(int array[100], int numOfEle, int numToSea)
{
    for (int i = 0; i < numOfEle; i++)
    {
        if (array[i] == numToSea)
        {
            return true;
            break;
        }
    }

    return false;
}

void PrintResult(int array[100], int numOfEle, int numToSea)
{
    if (FindNumberInArray(array, numOfEle, numToSea))
    {
        cout << "\nNumber you are looking for is: " << numToSea << endl;
        cout << "Yes the number is found." << endl;
    }
    else
    {
        cout << "\nNumber you are looking for is: " << numToSea << endl;
        cout << "No the number is not found." << endl;
    }
}

int main()
{
    WelcomeMessage();

    srand((unsigned)time(NULL));

    int array[100], numberOfElements = 0, numberToSearch = 0;

    numberOfElements = ReadPositiveNumber("Please, enter how many elements to need: ");
    FillArrayWithRandomNumber(array, numberOfElements);
    PrintArray(array, numberOfElements);

    numberToSearch = ReadPositiveNumber("Please, enter a number to search: ");
    PrintResult(array, numberOfElements, numberToSearch);
    
    cout << endl
         << endl;

    return 0;
}