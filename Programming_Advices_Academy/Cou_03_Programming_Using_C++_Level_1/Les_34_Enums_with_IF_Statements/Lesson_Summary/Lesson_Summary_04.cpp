#include <iostream>

using namespace std;

enum enCountry
{
    jordan = 1,
    tunisia = 2,
    syria = 3,
    oman = 4,
    egypt = 5,
    iraq = 6
};

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    cout << enCountry::jordan << endl;
    cout << enCountry::tunisia << endl;
    cout << enCountry::syria << endl;
    cout << enCountry::oman << endl;
    cout << enCountry::egypt << endl;
    cout << enCountry::iraq << endl;

    cout << endl
         << endl;

    return 0;
}