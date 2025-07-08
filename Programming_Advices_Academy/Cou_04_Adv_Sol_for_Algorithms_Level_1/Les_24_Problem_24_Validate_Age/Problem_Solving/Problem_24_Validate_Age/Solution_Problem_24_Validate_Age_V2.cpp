#include <iostream>

using namespace std;

//* Enums

enum enValidOrNot
{
    valid = 1,
    inValid = 2
};

//* End Enums

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int ReadAgeFun()
{
    int age = 0;

    cout << "Please, enter your age: ";
    cin >> age;

    return age;
}

enValidOrNot CheckAgeFun(int age)
{
    if (age >= 18 && age <= 45)
    {
        return enValidOrNot::valid;
    }
    else
    {
        return enValidOrNot::inValid;
    }
}

void PrintResultFun(enValidOrNot checkAge)
{
    if (checkAge == enValidOrNot::valid)
    {
        cout << "\nValid" << endl;
    }
    else
    {
        cout << "\nInValid" << endl;
    }
}

//* End Functions

int main()
{
    welcomeMessageFun();
    PrintResultFun(CheckAgeFun(ReadAgeFun()));

    cout << endl
         << endl;

    return 0;
}