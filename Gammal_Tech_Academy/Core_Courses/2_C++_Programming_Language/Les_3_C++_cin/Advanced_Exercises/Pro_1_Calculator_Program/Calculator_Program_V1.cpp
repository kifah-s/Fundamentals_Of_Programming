

/* >>> Calculator Program ( Version 1 ) <<< */

/* >>> Calculator software for geniuses ...
When using a traditional calculator, you read two numbers, perform a specific mathematical operation on them, and print the result. But usually geniuses like to test their mental abilities before knowing the final result.

Required: Create a calculator program when the user enters numbers and the type of calculation. The program asks the user about the result. If the result is correct, it prints (“You are a genius”) and then prints the result. If the result is wrong, it prints ( "Good Luck Next Time" ) then prints the result. <<< */

#include <iostream>
#include <string>

using namespace std;

// Function.
void welcomeMassageFun();
int getFirstNumFun(int x);
char getMathematicalProcessFun(char x);
int getSecondNumFun(int x);
int expectedSolutionFromUserFun(int x);
int solutionFun(int firstNumber, char k, int secondNumber, int theSolution);
void answerCorrectOrNotCorrectFun(int expectedSolutionFromUser, int theSolution);

// End Function.

int main()
{
    welcomeMassageFun();

    int firstNumber = 0, secondNumber = 0, theSolution = 0, expectedSolutionFromUser = 0;
    char k = 'a';

    theSolution = solutionFun(firstNumber, k, secondNumber, theSolution);
    answerCorrectOrNotCorrectFun(expectedSolutionFromUser, theSolution);

    return 0;
}

// Function.
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Calculator Program ( Version 1 ) .." << endl
         << endl;
}

// Get first number from user / Function.
int getFirstNumFun(int x)
{
    cout << "Please enter first number: ";
    cin >> x;

    return x;
}

// Get Mathematical process from user / Function.
char getMathematicalProcessFun(char x)
{
    cout << "Please enter mathematical process (* OR / OR + OR -): ";
    cin >> x;

    return x;
}

// Get second number from user / Function.
int getSecondNumFun(int x)
{
    cout << "Please enter second number: ";
    cin >> x;
    cout << endl;

    return x;
}

// Get expected solution from user // Function.
int expectedSolutionFromUserFun(int x)
{
    cout << "Please enter the answer you expect: ";
    cin >> x;
    cout << endl;

    return x;
}

// Solution / Function.
int solutionFun(int firstNumber, char k, int secondNumber, int theSolution)
{
    theSolution = 0;

    firstNumber = getFirstNumFun(firstNumber);
    k = getMathematicalProcessFun(k);
    secondNumber = getSecondNumFun(secondNumber);

    if (k == '*')
    {
        theSolution = firstNumber * secondNumber;
    }
    if (k == '/')
    {
        theSolution = firstNumber / secondNumber;
    }
    if (k == '+')
    {
        theSolution = firstNumber + secondNumber;
    }
    if (k == '-')
    {
        theSolution = firstNumber - secondNumber;
    }

    return theSolution;
}

// Answer correct Or not correct / Function.
void answerCorrectOrNotCorrectFun(int expectedSolutionFromUser, int theSolution)
{
    expectedSolutionFromUser = expectedSolutionFromUserFun(expectedSolutionFromUser);

    if (expectedSolutionFromUser == theSolution)
    {
        cout << "Your answer correct, you are a genius" << endl
             << endl;
        cout << "Solution is : " << theSolution << endl
             << endl;
    }
    else
    {
        cout << "Your answer not correct, good Luck Next Time" << endl
             << endl;
        cout << "Solution is : " << theSolution << endl
             << endl;
    }
}
// End Function.
