#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int ReadNumber(string message)
{
    int num = 0;

    cout << message;
    cin >> num;

    return num;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void RandomCharacter()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << (char)RandomNumber(65, 90);
        }

        if (i < 3)
        {
            cout << "-";
        }
    }
}

void GenerateKeys(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << "\nKey[" << i << "]: ";
        RandomCharacter();
    }
}

int main()
{
    WelcomeMessage();

    srand((unsigned)time(NULL));
    GenerateKeys(ReadNumber("Please, enter a number: "));

    cout << endl
         << endl;

    return 0;
}