#include <iostream>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Function

int main()
{
    welcomeMessage();

    float mark1 = 0, mark2 = 0, mark3 = 0, average = 0;

    cout << "Please, enter mark 1: ";
    cin >> mark1;

    cout << "Please, enter mark 2: ";
    cin >> mark2;

    cout << "Please, enter mark 3: ";
    cin >> mark3;

    average = (mark1 + mark2 + mark3) / 3;

    cout << "\nAverage: " << average << endl;

    cout << endl
         << endl;

    return 0;
}