#include <iostream>
#include <cstdlib>

using namespace std;

enum enCharType
{
    smallLetter = 1,
    capitalLetter = 2,
    spacialCharacter = 3,
    digit = 4,
};

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

char GenerateRandomCharacter(enCharType charType)
{
    switch (charType)
    {
    case enCharType::smallLetter:
    {
        return (char)GenerateRandomNumber(97, 122);
        break;
    }

    case enCharType::capitalLetter:
    {
        return (char)GenerateRandomNumber(65, 90);
        break;
    }

    case enCharType::spacialCharacter:
    {
        return (char)GenerateRandomNumber(33, 47);
        break;
    }

    case enCharType::digit:
    {
        return (char)GenerateRandomNumber(48, 57);
        break;
    }
    }

    return '\0';
}

string GenerateWord(enCharType charType, int length)
{
    string word = "";

    for (int i = 1; i <= length; i++)
    {
        word = word + GenerateRandomCharacter(charType);
    }

    return word;
}

string GenerateKey()
{
    string key = "";

    key = key + GenerateWord(enCharType::capitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::capitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::capitalLetter, 4) + "-";
    key = key + GenerateWord(enCharType::capitalLetter, 4);

    return key;
}

void FillArrayWithKeys(string array[100], int numOfKeys)
{
    for (int i = 0; i < numOfKeys; i++)
    {
        array[i] = GenerateKey();
    }
}

void PrintArray(string array[100], int numOfKeys)
{
    for (int i = 0; i < numOfKeys; i++)
    {
        cout << "Key [" << i << "] : " << array[i] << endl;
    }
}

int main()
{
    WelcomeMessage();

    srand((unsigned)time(NULL));

    string array[100];
    int numberOfKeys = 0;

    numberOfKeys = ReadPositiveNumber("Please enter how many keys to generate: ");
    FillArrayWithKeys(array, numberOfKeys);
    PrintArray(array, numberOfKeys);

    cout << endl
         << endl;

    return 0;
}