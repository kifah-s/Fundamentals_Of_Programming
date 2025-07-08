#include <iostream>

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

    int years = 5;
    int ageAfterYears = 5 + 24;

    cout << "After " << years << " years you will be " << ageAfterYears << " years old." << endl;

    cout << endl
         << endl;

    return 0;
}