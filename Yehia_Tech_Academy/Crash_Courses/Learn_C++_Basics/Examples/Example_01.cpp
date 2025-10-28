#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    //* Control Structure.

    // int grade = 0;
    // cout << "Please, enter your grade: ";
    // cin >> grade;

    // if (grade >= 90 && grade <= 100)
    // {
    //     cout << "A+" << endl;
    // }
    // else if (grade >= 80 && grade < 90)
    // {
    //     cout << "B+" << endl;
    // }
    // else if (grade >= 70 && grade < 80)
    // {
    //     cout << "C+" << endl;
    // }
    // else if (grade >= 60 && grade < 70)
    // {
    //     cout << "D+" << endl;
    // }
    // else if (grade >= 50 && grade < 60)
    // {
    //     cout << "E+" << endl;
    // }
    // else if (grade >= 0 && grade < 50)
    // {
    //     cout << "F+" << endl;
    // }
    // else
    // {
    //     cout << "Bad Input !!" << endl;
    // }

    //* ------------------------------------------------

    // int grade = 0;
    // cout << "Please, enter your grade: ";
    // cin >> grade;

    // if (grade > 100)
    // {
    //     cout << "Bad Input !!" << endl;
    // }
    // else if (grade >= 90)
    // {
    //     cout << "A+" << endl;
    // }
    // else if (grade >= 80)
    // {
    //     cout << "B+" << endl;
    // }
    // else if (grade >= 70)
    // {
    //     cout << "C+" << endl;
    // }
    // else if (grade >= 60)
    // {
    //     cout << "D+" << endl;
    // }
    // else if (grade >= 50)
    // {
    //     cout << "E+" << endl;
    // }
    // else if (grade >= 0)
    // {
    //     cout << "F+" << endl;
    // }
    // else
    // {
    //     cout << "Bad Input !!" << endl;
    // }

    //* ------------------------------------------------

    int grade = 0;
    cout << "Please, enter your grade: ";
    cin >> grade;

    if (grade > 100 || grade < 0)
    {
        cout << "Bad Input !!" << endl;
    }
    else if (grade >= 90)
    {
        cout << "A+" << endl;
    }
    else if (grade >= 80)
    {
        cout << "B+" << endl;
    }
    else if (grade >= 70)
    {
        cout << "C+" << endl;
    }
    else if (grade >= 60)
    {
        cout << "D+" << endl;
    }
    else if (grade >= 50)
    {
        cout << "E+" << endl;
    }
    else if (grade >= 0)
    {
        cout << "F+" << endl;
    }

    cout << endl
         << endl;

    return 0;
}