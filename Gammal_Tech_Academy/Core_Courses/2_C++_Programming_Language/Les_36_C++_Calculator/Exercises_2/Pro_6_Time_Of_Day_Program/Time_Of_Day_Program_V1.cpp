
//* Time Of Day Program (Version 1).

/*
* Create a program that takes the current hour as input and outputs a greeting based on the time of day:
* 5 AM to 11:59 AM: Good Morning
* 12 PM to 4:59 PM: Good Afternoon
* 5 PM to 8:59 PM: Good Evening
* 9 PM to 4:59 AM: Good Night

! Input:
! Please, Enter the current hour (24-hour format): 14

! Output:
! Good Afternoon.
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Time Of Day Program (Version 1) ..\n"
         << endl;
}

// Get Time - Function.
float getTimeFun()
{
    float t;
    cout << "Please, Enter the current hour (24-hour format): ";
    cin >> t;

    return t;
}

// Check Time - Function.
void checkTimeFun(float t)
{
    if (t >= 5 && t < 12)
    {
        cout << "Good Morning." << endl;
    }
    else if (t >= 12 && t < 17)
    {
        cout << "Good Afternoon." << endl;
    }
    else if (t >= 17 && t < 21)
    {
        cout << "Good Evening." << endl;
    }
    else if ((t >= 21 && t <= 23) || (t >= 0 && t < 5))
    {
        cout << "Good Night." << endl;
    }
    else
    {
        cout << "Invalid input." << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    float time;

    // Call Functions.
    printWelcomeMessageFun();
    time = getTimeFun();
    checkTimeFun(time);

    cout << "\n"
         << endl;
}
//* End Function ..
