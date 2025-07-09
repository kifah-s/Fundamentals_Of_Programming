#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int ReadNumber()
{
    int num = 0;

    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

bool AddMoreNumber()
{
    bool answer = 0;

    cout << "Do you want to add number? (0 : No) - (1 : Yes): ";
    cin >> answer;

    return answer;
}

int FillArray(int array[100])
{
    int counter = 0;

    do
    {
        array[counter] = ReadNumber();
        counter++;
    } while (AddMoreNumber() && counter < 100);

    return counter;
}

void PrintArray(int array[100], int lengthArray)
{
    cout << "\nArray Length: " << lengthArray << endl;
    cout << "Array Elements: ";

    for (int i = 0; i < lengthArray; i++)
    {
        cout << array[i] << " ";
    }
}

void PrintResult()
{
    int myArray[100], arrayLength = 0;
    PrintArray(myArray, FillArray(myArray));
}

int main()
{
    WelcomeMessage();
    PrintResult();

    cout << endl
         << endl;

    return 0;
}