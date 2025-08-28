#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    //* Get time now.
    time_t t = time(0);

    //* Convert in string form.
    char *dt = ctime(&t);
    cout << "Local date and time is: " << dt << "\n";

    //* Converting now to tm struct for UTC date/time
    tm *gmtm = gmtime(&t);
    dt = asctime(gmtm);
    cout << "UTC date and time is: " << dt;

    cout << endl
         << endl;

    return 0;
}