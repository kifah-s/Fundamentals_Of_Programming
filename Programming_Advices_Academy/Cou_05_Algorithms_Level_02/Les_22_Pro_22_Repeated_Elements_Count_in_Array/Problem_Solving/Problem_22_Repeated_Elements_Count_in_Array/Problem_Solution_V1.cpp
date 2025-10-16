#include <iostream>

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

void ReadArrayElemets(int length, int array[])
{
    cout << "\nPlease, enter array elements:" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << "Element [" << i + 1 << "]: ";
        cin >> array[i];
    }
}

void PrintArray(int length, int array[])
{
    cout << "\nOriginal Array: ";
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
}

int ReadNumberYouWantCheck()
{
    int numberCheck = 0;

    cout << "\nPlease, enter a number you want check: ";
    cin >> numberCheck;

    return numberCheck;
}

int CheckNumber(int length, int array[], int numberCheck)
{
    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        if (array[i] == numberCheck)
        {
            counter++;
        }
    }

    return counter;
}

void PrintResult()
{
    int length = 0, array[100], numberCheck = 0, counter = 0;

    length = ReadPositiveNumber("Please, enter how many elements you want in array: ");
    ReadArrayElemets(length, array);
    numberCheck = ReadNumberYouWantCheck();
    counter = CheckNumber(length, array, numberCheck);
    PrintArray(length, array);
    cout << "\n" << numberCheck << " is repeated " << counter << " time(s)." << endl;
}

int main()
{
    WelcomeMessage();
    
    PrintResult();

    cout << endl
         << endl;

    return 0;
}