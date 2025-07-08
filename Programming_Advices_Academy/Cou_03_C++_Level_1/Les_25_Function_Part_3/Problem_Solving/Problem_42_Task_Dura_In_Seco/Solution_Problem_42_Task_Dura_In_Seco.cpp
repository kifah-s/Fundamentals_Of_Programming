#include <iostream>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int calculateTotalSeconds(int d, int h, int m, int s)
{
    return  (d * 24 * 60 * 60) + (h * 60 * 60) + (m * 60) + s;
}

//* End Function

int main()
{
    welcomeMessage();

    int days = 0, hours = 0, minutes = 0, seconds = 0;
    int totalSeconds = 0;

    cout << "Please, enter days: ";
    cin >> days;

    cout << "Please, enter hours: ";
    cin >> hours;

    cout << "Please, enter minutes: ";
    cin >> minutes;

    cout << "Please, enter seconds: ";
    cin >> seconds;

    totalSeconds = calculateTotalSeconds(days, hours, minutes, seconds);

    cout << "\nTotal Seconds: " << totalSeconds << endl;

    cout << endl
         << endl;

    return 0;
}