

/* >>> Calculator Program ( Version 1 ) <<< */

/* >>> Calculator software for geniuses ...
When using a traditional calculator, you read two numbers, perform a specific mathematical operation on them, and print the result. But usually geniuses like to test their mental abilities before knowing the final result.
Required: Create a calculator program when the user enters numbers and the type of calculation. The program asks the user about the result. If the result is correct, it prints (“You are a genius”) and then prints the result. If the result is wrong, it prints (“You are a genius”). "Good Luck Next Time" ) then prints the result. <<< */

#include <iostream>
#include <string>

using namespace std;

// Function.
void welcomeMassageFun();
int getFirstNumFun(int x);
char getMathematicalProcessFun(char x);
int getSecondNumFun(int x);

// End Function.

int main()
{
    welcomeMassageFun();

    int firstNumber = 0, secondNumber = 0;
    char k = 'a';

    firstNumber = getFirstNumFun(firstNumber);
    k = getMathematicalProcessFun(k);
    secondNumber = getSecondNumFun(secondNumber);
    /* cout << endl
         << "first num: " << firstNumber << endl
         << "Mathematical Process: " << k << endl
         << "Second num: " << secondNumber << endl
         << endl; // Check. */

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

    return x;
}




// End Function.
