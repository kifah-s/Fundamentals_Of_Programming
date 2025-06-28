#include <iostream>

using namespace std;

//* Enums

enum enPassFail
{
    pass = 1,
    fail = 2
};

//* End Enums

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int getMarkFun()
{
    int mark = 0;

    cout << "Please, enter mark: ";
    cin >> mark;

    return mark;
}

enPassFail checkMarkFun(int mark)
{
    if (mark >= 50)
    {
        return enPassFail::pass;
    }
    else
    {
        return enPassFail::fail;
    }
}

void printResultFun(int mark)
{
    if (checkMarkFun(mark) == enPassFail::pass)
    {
        cout << "\nPass." << endl;
    }
    else
    {
        cout << "\nFail." << endl;
    }
}
//* End Functions

int main()
{
    welcomeMessageFun();

    printResultFun(getMarkFun());

    cout << endl
         << endl;

    return 0;
}