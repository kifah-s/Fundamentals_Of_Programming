#include <iostream>

using namespace std;

enum enQuestionsLevel
{
    easyLevel = 1,
    medLevel = 2,
    hardLevel = 3,
    mixLevel = 4
};

enum enOperationType
{
    collection = 1,
    subtraction = 2,
    multiply = 3,
    division = 4,
    mix = 5
};

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

short HowManyQuestions()
{
    short answer = 0;

    do
    {
        cout << "How many questions do you want answer: ";
        cin >> answer;
    } while (answer <= 0);

    return answer;
}

enQuestionsLevel SelectQuestionsLevel()
{
    short answer = 0;

    cout << "\nQuestions Level: " << endl;
    cout << "1) Easy.\n2) Mid.\n3) Hard.\n4) Mix." << endl;

    do
    {
        cout << "Please, enter questions level [1 - 4]: ";
        cin >> answer;
    } while (answer < 1 || answer > 4);

    return (enQuestionsLevel)answer;
}

enOperationType SelectOperationType()
{
    short answer = 0;

    cout << "Operation Type: " << endl;
    cout << "1) Add.\n2) Sub.\n3) Mul.\n4) Div.\n5) Mix." << endl;

    do
    {
        cout << "Please, enter operation type [1 - 5]: ";
        cin >> answer;
    } while (answer < 1 || answer > 5);

    return (enOperationType)answer;
}

int RandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

short EasyLevelOfQuestions()
{
    return RandomNumber(1, 10);
}

short MedLevelOfQuestions()
{
    return RandomNumber(10, 30);
}

short HardLevelOfQuestions()
{
    return RandomNumber(30, 100);
}

short MixLevelOfQuestions()
{
    return RandomNumber(1, 100);
}

short CollectionNumbers(short firstNumber, short secondNumber)
{
    short result = 0;

    result = firstNumber + secondNumber;

    return result;
}

short SubtractionNumbers(short firstNumber, short secondNumber)
{
    short result = 0;

    result = firstNumber - secondNumber;

    return result;
}

short MultiplyNumbers(short firstNumber, short secondNumber)
{
    short result = 0;

    result = firstNumber * secondNumber;

    return result;
}

short DivisionNumbers(short firstNumber, short secondNumber)
{
    short result = 0;

    result = firstNumber / secondNumber;

    return result;
}

void PlayGame()
{
    short numberOfQuestions = HowManyQuestions();
    enQuestionsLevel questionLevel = SelectQuestionsLevel();
    enOperationType operationType = SelectOperationType();

    for (short question = 1; question <= numberOfQuestions; question++)
    {
        cout << "\nQuestion [" << question << " / " << numberOfQuestions << " ]:" << endl;

        switch (questionLevel)
        {
        case easyLevel:
            cout << EasyLevelOfQuestions();
            break;

        case medLevel:
            cout << MedLevelOfQuestions();
            break;

        case hardLevel:
            cout << HardLevelOfQuestions();
            break;

        case mixLevel:
            cout << MixLevelOfQuestions();
            break;
        }
    }
}

int main()
{
    WelcomeMessage();

    srand((unsigned)time(NULL));

    // PlayGame();

    cout << endl
         << endl;

    return 0;
}