#include <iostream>
#include <cmath>

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

    float days = 0, hours = 0, minutes = 0, seconds = 0;
    float totalSeconds = 0;

    cout << "Please, enter days: ";
    cin >> days;

    cout << "Please, enter hours: ";
    cin >> hours;

    cout << "Please, enter minutes: ";
    cin >> minutes;

    cout << "Please, enter seconds: ";
    cin >> seconds;

    totalSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;

    cout << "\nTotal Seconds: " << totalSeconds << endl;
    cout << "Total Seconds: " << round(totalSeconds) << endl;

    cout << endl
         << endl;

    return 0;
}