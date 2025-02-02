
//* Class Time Program (Version 1).

/*
* Create a class named Time with attributes hours, minutes, and seconds.
* Include a method to display the time in HH:MM:SS format.

! Output:
! Time: 14:30:45
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

//* Classes ..
class Time
{
private:
    int hours, minutes, seconds;

public:
    // Setter.
    void setHours(int h)
    {
        hours = h;
    }

    void setMinutes(int m)
    {
        minutes = m;
    }

    void setSeconds(int s)
    {
        seconds = s;
    }

    // Getter.
    void printTime()
    {
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Time Program (Version 1) ..\n"
         << endl;
}

// Time - Function.
void timeFun()
{
    Time t1;
    t1.setHours(14);
    t1.setMinutes(30);
    t1.setSeconds(45);
    t1.printTime();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    timeFun();

    cout << "\n"
         << endl;
}
//* End Function ..
