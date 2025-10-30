#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

class clsPerson
{
    // This private and will not be accessed from outside the class.
    // For internal use only.
    int x;

public:
    string firstName;
    string lastName;

    string FullName()
    {
        return firstName + " " + lastName;
    }
};

int main()
{
    WelcomeMessage();

    clsPerson person1;

    person1.firstName = "Kifah";
    person1.lastName = "Saloum";

    cout << person1.FullName() << endl;

    cout << endl
         << endl;

    return 0;
}