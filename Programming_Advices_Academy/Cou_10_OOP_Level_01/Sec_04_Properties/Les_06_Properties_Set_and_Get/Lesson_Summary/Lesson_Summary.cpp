#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

class clsPerson
{
private:
    string _firstName;
    string _lastName;

public:
    // Property Set.
    void setFirstName(string firstName)
    {
        _firstName = firstName;
    }

    // Property Get.
    string getFirstName()
    {
        return _firstName;
    }

    // Property Set.
    void setLastName(string lastName)
    {
        _lastName = lastName;
    }

    // Property Get.
    string getLastName()
    {
        return _lastName;
    }

    string getFullName()
    {
        return _firstName + " " + _lastName;
    }
};

int main()
{
    WelcomeMessage();

    clsPerson person1;

    person1.setFirstName("kifah");
    person1.setLastName("saloum");

    cout << "First Name: " << person1.getFirstName() << endl;
    cout << "Last Name: " << person1.getLastName() << endl;
    cout << "Full Name: " << person1.getFullName() << endl;

    cout << endl
         << endl;

    return 0;
}