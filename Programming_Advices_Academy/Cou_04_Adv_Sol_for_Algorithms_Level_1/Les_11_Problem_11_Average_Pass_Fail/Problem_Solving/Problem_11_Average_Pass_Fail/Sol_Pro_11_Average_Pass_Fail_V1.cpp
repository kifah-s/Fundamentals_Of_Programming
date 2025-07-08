#include <iostream>

using namespace std;

//* Structs

struct stMarks
{
    float mark1 = 0;
    float mark2 = 0;
    float mark3 = 0;
};

//* End Structs

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stMarks getMarksFun()
{
    stMarks marks;

    cout << "Please, enter mark 1: ";
    cin >> marks.mark1;

    cout << "Please, enter mark 2: ";
    cin >> marks.mark2;

    cout << "Please, enter mark 3: ";
    cin >> marks.mark3;

    return marks;
}

float calcAverageMarksFun(stMarks marks)
{
    return (marks.mark1 + marks.mark2 + marks.mark3) / 3;
}

void passOrFailFun(stMarks marks)
{
    if (calcAverageMarksFun(marks) >= 50)
    {
        cout << "\nPass" << endl;
    }
    else
    {
        cout << "\nFail" << endl;
    }
}

void printResultFun(stMarks marks)
{
    cout << "\nAverage Marks: " << calcAverageMarksFun(marks) << endl;
    passOrFailFun(marks);
}

//* End Functions

int main()
{
    welcomeMessageFun();

    printResultFun(getMarksFun());

    cout << endl
         << endl;

    return 0;
}