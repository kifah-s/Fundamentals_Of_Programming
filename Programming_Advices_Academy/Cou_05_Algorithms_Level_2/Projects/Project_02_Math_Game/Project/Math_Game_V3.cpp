#include <iostream>

using namespace std;

enum enOperationType
{

};

enum enQuestionsLevel
{

};

struct stQuestion
{
    int number1 = 0;
    int number2 = 0;
    enOperationType operationType;
    enQuestionsLevel questionLevel;
    int correctAnswer = 0;
    int plyerAnswer = 0;
    bool answerResult = false;
};

struct stQuiz
{
    stQuestion questionList[100];
    int numberOfQuestions = 0;
};

void ResetScreen()
{
    system("cls");
}

void WelcomeMessage()
{
    ResetScreen();

    cout << "\nWelcome to the Project - Math Game (Version 3) ..\n"
         << endl;
}

void PlayMathGame()
{
    stQuiz quiz;
}

void StartGame()
{
    char playAgain = 'y';

    do
    {
        WelcomeMessage();
        PlayMathGame();

        cout << "\nDo you want play again? ( Y / N ): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');
}

int main()
{
    srand((unsigned)time(NULL));

    // StartGame();

    return 0;
}