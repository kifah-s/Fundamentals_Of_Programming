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

int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;
}

char RandomCharacter(enCharType charType)
{
    switch (charType)
    {
    case enCharType::smallLetter:
    {
        return (char)RandomNumber(97, 122);
        break;
    }

    case enCharType::capitalLetter:
    {
        return (char)RandomNumber(65, 90);
        break;
    }

    case enCharType::spacialCharacter:
    {
        return (char)RandomNumber(33, 47);
        break;
    }

    case enCharType::digit:
    {
        return (char)RandomNumber(48, 57);
        break;
    }
    }

    return '\0';
}

string GenerateWord(enCharType charType, short length)
{
    string word = "";

    for (int i = 1; i <= length; i++)
    {
        word = word + RandomCharacter(charType);
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

void GenerateKeys(short numOfKeys)
{
    for (int i = 1; i <= numOfKeys; i++)
    {
        cout << "Key [" << i << "] : " << GenerateKey() << endl;
    }
}

int main()
{
    WelcomeMessage();

    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositiveNumber("Please enter how many keys to generate: "));

    cout << endl
         << endl;

    return 0;
}