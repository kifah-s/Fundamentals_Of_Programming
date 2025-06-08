#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    float grade = 0;

    cout << "Pleas, enter a grade: ";
    cin >> grade;

    // if (grade >= 50 && grade <= 59)
    // {
    //     cout << "\nE" << endl;
    // }
    // else if (grade >= 60 && grade <= 69)
    // {
    //     cout << "\nD" << endl;
    // }
    // else if (grade >= 70 && grade <= 79)
    // {
    //     cout << "\nC" << endl;
    // }
    // else if (grade >= 80 && grade <= 89)
    // {
    //     cout << "\nB" << endl;
    // }
    // else if (grade >= 90 && grade <= 100)
    // {
    //     cout << "\nA" << endl;
    // }
    // else
    // {
    //     cout << "\nF" << endl;
    // }

    if (grade >= 90 && grade <= 100)
    {
        cout << "\nA" << endl;
    }
    else if (grade >= 80 && grade <= 89)
    {
        cout << "\nB" << endl;
    }
    else if (grade >= 70 && grade <= 79)
    {
        cout << "\nC" << endl;
    }
    else if (grade >= 60 && grade <= 69)
    {
        cout << "\nD" << endl;
    }
    else if (grade >= 50 && grade <= 59)
    {
        cout << "\nE" << endl;
    }
    else
    {
        cout << "\nF" << endl;
    }

    cout << endl
         << endl;

    return 0;
}