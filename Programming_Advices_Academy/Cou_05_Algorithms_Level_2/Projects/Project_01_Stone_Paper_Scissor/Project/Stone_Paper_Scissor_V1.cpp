#include <iostream>
#include <cstdlib>
// #include <ctime>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

enum enChoices
{
    stone = 1,
    paper = 2,
    scissors = 3
};

int ReadNumberOfRounds()
{
    int numberOfRound = 0;

    do
    {
        cout << "How Many Rounds You Want Play (From 1 To 10): ";
        cin >> numberOfRound;
    } while (numberOfRound <= 0 || numberOfRound > 10);

    return numberOfRound;
}

int ChoicesInterface()
{
    int choice = 0;

    cout << "Choices:" << endl;
    cout << "1: Stone." << endl;
    cout << "2: Paper." << endl;
    cout << "3: Scissors." << endl;
    cout << "Please, enter Your Choice: ";
    cin >> choice;

    return choice;
}

int GenerateRandomNumber1to3()
{
    return (rand() % 3) + 1;
}

void WinnerOfRound(int roundNumber)
{
    cout << "\n-------------------------- ROUND - " << roundNumber << " ------------------------------" << endl;
    
    cout << "\n-------------------------------------------------------------------" << endl;
}

void RepeatRounds(int numberOfRounds)
{
    int choice = 0;
    int randomNumber = 0;

    for (int i = 0; i < numberOfRounds; i++)
    {
        cout << "\nRound " << i + 1 << " Begins: \n"
             << endl;
        choice = ChoicesInterface();
        cout << "\nPlyer Choice: " << choice << endl;

        randomNumber = GenerateRandomNumber1to3();
        cout << "Computer Choice: " << randomNumber << endl;

        WinnerOfRound(i + 1);
    }
}

int main()
{
    WelcomeMessage();

    srand(time(0));

    RepeatRounds(ReadNumberOfRounds());

    cout << endl
         << endl;

    return 0;
}