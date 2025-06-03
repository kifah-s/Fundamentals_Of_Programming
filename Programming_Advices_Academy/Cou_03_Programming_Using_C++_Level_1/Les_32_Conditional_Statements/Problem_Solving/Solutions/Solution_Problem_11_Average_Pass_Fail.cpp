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

    float mark_1 = 0, mark_2 = 0, mark_3 = 0, average = 0;

    cout << "Please, enter a mark 1: ";
    cin >> mark_1;
    
    cout << "Please, enter a mark 2: ";
    cin >> mark_2;
    
    cout << "Please, enter a mark 3: ";
    cin >> mark_3;

    average = (mark_1 + mark_2 + mark_3) / 3;

    if (average >= 50)
    {
        cout << "\nAverage: " << average << endl;
        cout << "Pass" << endl;
    }
    else
    {
        cout << "\nAverage: " << average << endl;
        cout << "Fail" << endl;
    }

    cout << endl
         << endl;

    return 0;
}