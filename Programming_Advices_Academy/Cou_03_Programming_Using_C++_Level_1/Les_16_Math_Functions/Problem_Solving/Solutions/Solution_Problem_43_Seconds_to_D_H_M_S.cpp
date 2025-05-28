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

    int totalSeconds = 0;
    int secondsPerDays = 24 * 60 * 60;
    int secondsPerHours = 60 * 60;
    int secondsPerMinutes = 60;
    int remainder = 0;

    cout << "Please, enter total seconds: ";
    cin >> totalSeconds;

    int numberOfDays = floor(totalSeconds / secondsPerDays);
    remainder = totalSeconds % secondsPerDays;

    int numberOfHours = floor(remainder / secondsPerHours);
    remainder = remainder % secondsPerHours;

    int numberOfMinutes = floor(remainder / secondsPerMinutes);
    remainder = remainder % secondsPerMinutes;

    int numberOfSeconds = remainder;

    cout << round(numberOfDays) << " : " << round(numberOfHours) << " : " << round(numberOfMinutes) << " : " << round(numberOfSeconds) << endl;

    cout << endl
         << endl;

    return 0;
}