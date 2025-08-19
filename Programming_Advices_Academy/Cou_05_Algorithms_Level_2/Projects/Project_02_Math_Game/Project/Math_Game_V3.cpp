#include <iostream>

using namespace std;

enum enQuestionsLevel
{
    easyLevel = 1,
    midLevel = 2,
    hardLevel = 3,
    mixLevel = 4
};

enum enOperationType
{
    addition = 1,
    subtraction = 2,
    multiplication = 3,
    division = 4,
    mixOperation = 5
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
    short numberOfQuestions = 0;
    enOperationType operationType;
    enQuestionsLevel questionsLevel;
    short numberOfRightAnswers = 0;
    short numberOfWrongAnswers = 0;
    bool isPass = false;
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

short ReadHowManyQuestions()
{
    short numberOfQuestions = 0;
    do
    {
        cout << "How many questions do you want to answer: ";
        cin >> numberOfQuestions;
    } while (numberOfQuestions < 1 || numberOfQuestions > 10);

    return numberOfQuestions;
}

enQuestionsLevel ReadQuestionsLevel()
{
    short questionsLevel = 0;
    do
    {
        cout << "Please, enter questions level ( 1 - easy, 2 - med, 3 - hard, 4 - mix): ";
        cin >> questionsLevel;
    } while (questionsLevel < 1 || questionsLevel > 4);

    return (enQuestionsLevel)questionsLevel;
}

enOperationType ReadOperationType()
{
    short operationType = 0;
    do
    {
        cout << "Please, enter operation type ( 1 - add, 2 - sub, 3 - mul, 4 - div, 5 - mix): ";
        cin >> operationType;
    } while (operationType < 1 || operationType > 5);

    return (enOperationType)operationType;
}

void GenerateQuizQuestions(stQuiz &quiz)
{
    for (short question = 0; question < quiz.numberOfQuestions; question++)
    {
        
    }
    
}

void PlayMathGame()
{
    stQuiz quiz;

    quiz.numberOfQuestions = ReadHowManyQuestions();
    quiz.questionsLevel = ReadQuestionsLevel();
    quiz.operationType = ReadOperationType();

    GenerateQuizQuestions(quiz);
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