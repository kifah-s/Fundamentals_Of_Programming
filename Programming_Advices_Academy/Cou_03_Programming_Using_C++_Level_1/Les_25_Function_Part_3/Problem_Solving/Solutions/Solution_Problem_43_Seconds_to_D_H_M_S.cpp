#include <iostream>
#include <cmath>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void calculateSecondsTo_D_H_M_S(int totSec)
{
    int secondsPerDays = 24 * 60 * 60;
    int secondsPerHours = 60 * 60;
    int secondsPerMinutes = 60;
    int remainder = 0;

    int numberOfDays = floor(totSec / secondsPerDays);
    remainder = totSec % secondsPerDays;

    int numberOfHours = floor(remainder / secondsPerHours);
    remainder = remainder % secondsPerHours;

    int numberOfMinutes = floor(remainder / secondsPerMinutes);
    remainder = remainder % secondsPerMinutes;

    int numberOfSeconds = remainder;

    cout << numberOfDays << " : " << numberOfHours << " : " << numberOfMinutes << " : " << numberOfSeconds << endl;
}

//* End Function

int main()
{
    welcomeMessage();

    int totalSeconds = 0;

    cout << "Please, enter total seconds: ";
    cin >> totalSeconds;

    calculateSecondsTo_D_H_M_S(totalSeconds);

    cout << endl
         << endl;

    return 0;
}