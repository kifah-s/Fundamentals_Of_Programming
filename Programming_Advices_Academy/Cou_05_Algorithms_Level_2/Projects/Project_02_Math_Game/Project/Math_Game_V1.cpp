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

    cout << "\nOperation Type: " << endl;
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

char GenerateRandomOperationType()
{
    short arr[4] = {42, 43, 45, 47};

    short index = rand() % 4;

    return (char)arr[index];
}

char GenerateOperationType(enOperationType operationType)
{
    switch (operationType)
    {
    case collection:
        return '+';

    case subtraction:
        return '-';

    case multiply:
        return '*';

    case division:
        return '/';

    case mix:
        return GenerateRandomOperationType();
    }

    return 0;
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

short CheckCollectionNumbers(short firstNumber, short secondNumber)
{
    short result = 0;

    result = firstNumber + secondNumber;

    return result;
}

short CheckSubtractionNumbers(short firstNumber, short secondNumber)
{
    short result = 0;

    result = firstNumber - secondNumber;

    return result;
}

short CheckMultiplyNumbers(short firstNumber, short secondNumber)
{
    short result = 0;

    result = firstNumber * secondNumber;

    return result;
}

short CheckDivisionNumbers(short firstNumber, short secondNumber)
{
    short result = 0;

    result = firstNumber / secondNumber;

    return result;
}

short CheckMixOperationNumbers(char operationType, short firstNumber, short secondNumber)
{
    switch (operationType)
    {
    case '+':
        return CheckCollectionNumbers(firstNumber, secondNumber);

    case '-':
        return CheckSubtractionNumbers(firstNumber, secondNumber);

    case '*':
        return CheckMultiplyNumbers(firstNumber, secondNumber);

    case '/':
        return CheckDivisionNumbers(firstNumber, secondNumber);
    }
}

void IsRightAnswer(short userAnswer, short correctAnswer)
{
    cout << "Correct Answer is: " << correctAnswer << endl;

    if (userAnswer == correctAnswer)
    {
        cout << "Your Answer is Right :)" << endl;
    }
    else
    {
        cout << "Your Answer is Wrong :(" << endl;
    }
}

void CheckAnswer(enOperationType operationType, short firstNumber, short secondNumber, short userAnswer, short correctAnswer)
{
    switch (operationType)
    {
    case collection:
        correctAnswer = CheckCollectionNumbers(firstNumber, secondNumber);
        IsRightAnswer(userAnswer, correctAnswer);
        break;

    case subtraction:
        correctAnswer = CheckSubtractionNumbers(firstNumber, secondNumber);
        IsRightAnswer(userAnswer, correctAnswer);
        break;

    case multiply:
        correctAnswer = CheckMultiplyNumbers(firstNumber, secondNumber);
        IsRightAnswer(userAnswer, correctAnswer);
        break;

    case division:
        correctAnswer = CheckDivisionNumbers(firstNumber, secondNumber);
        IsRightAnswer(userAnswer, correctAnswer);
        break;

    case mix:
        correctAnswer = CheckMixOperationNumbers(operationType, firstNumber, secondNumber);
        IsRightAnswer(userAnswer, correctAnswer);
        break;
    }
}

void PlayGame()
{
    short numberOfQuestions = HowManyQuestions();
    enQuestionsLevel questionLevel = SelectQuestionsLevel();
    enOperationType operationType = SelectOperationType();
    short firstNumber = 0, secondNumber = 0, correctAnswer = 0, userAnswer = 0;

    for (short question = 1; question <= numberOfQuestions; question++)
    {
        cout << "\nQuestion [" << question << " / " << numberOfQuestions << " ]:" << endl;

        switch (questionLevel)
        {
        case easyLevel:
            firstNumber = EasyLevelOfQuestions();
            secondNumber = EasyLevelOfQuestions();
            cout << firstNumber << " " << GenerateOperationType(operationType) << " " << secondNumber << ": ";
            cin >> userAnswer;
            CheckAnswer(operationType, firstNumber, secondNumber, userAnswer, correctAnswer);
            break;

        case medLevel:
            firstNumber = MedLevelOfQuestions();
            secondNumber = MedLevelOfQuestions();
            cout << firstNumber << " " << GenerateOperationType(operationType) << " " << secondNumber << ": ";
            cin >> userAnswer;
            CheckAnswer(operationType, firstNumber, secondNumber, userAnswer, correctAnswer);
            break;

        case hardLevel:
            firstNumber = HardLevelOfQuestions();
            secondNumber = HardLevelOfQuestions();
            cout << firstNumber << " " << GenerateOperationType(operationType) << " " << secondNumber << ": ";
            cin >> userAnswer;
            CheckAnswer(operationType, firstNumber, secondNumber, userAnswer, correctAnswer);
            break;

        case mixLevel: //* I'm Here
            firstNumber = MixLevelOfQuestions();
            secondNumber = MixLevelOfQuestions();
            cout << firstNumber << " " << GenerateOperationType(operationType) << " " << secondNumber << ": ";
            cin >> userAnswer;
            CheckAnswer(operationType, firstNumber, secondNumber, userAnswer, correctAnswer);
            break;
        }
    }
}

int main()
{
    WelcomeMessage();

    srand((unsigned)time(NULL));

    PlayGame();

    cout << endl
         << endl;

    return 0;
}