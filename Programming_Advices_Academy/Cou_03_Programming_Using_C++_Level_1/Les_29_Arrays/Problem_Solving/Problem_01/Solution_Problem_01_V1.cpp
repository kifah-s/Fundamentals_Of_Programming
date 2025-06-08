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

    float grades[3];

    cout << "Please, enter grade 1: ";
    cin >> grades[0];

    cout << "Please, enter grade 2: ";
    cin >> grades[1];

    cout << "Please, enter grade 3: ";
    cin >> grades[2];

    float average = (grades[0] + grades[1] + grades[2]) / 3;

    cout << "\nAverage: " << average << endl;

    cout << endl
         << endl;

    return 0;
}