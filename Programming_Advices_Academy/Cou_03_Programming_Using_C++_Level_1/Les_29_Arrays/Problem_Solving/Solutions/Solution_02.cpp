#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float calculateAverage(float gra[3])
{
    float ave = (gra[0] + gra[1] + gra[2]) / 3;

    return ave;
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


    cout << "\nAverage: " << calculateAverage(grades) << endl;

    cout << endl
         << endl;

    return 0;
}