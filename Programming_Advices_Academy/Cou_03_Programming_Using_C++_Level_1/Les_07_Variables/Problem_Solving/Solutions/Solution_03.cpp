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

    int age = 25;
    int ageAfter5years = 5 + 25;

    cout << "After " << age << " years you will be " << ageAfter5years << " years old." << endl;

    cout << endl
         << endl;

    return 0;
}