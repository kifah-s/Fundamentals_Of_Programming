#include <iostream>

using namespace std;

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

bool checkMarkFun(int mark)
{
    if (mark >= 50)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void printResultFun(int mark)
{
    if (checkMarkFun(mark))
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