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
    // only accessble inside this class.
    int variable1 = 5;

    int Function1()
    {
        return 40;
    }

protected:
    // only accessble inside this class and all classes inherits this class.
    int variable2 = 100;

    int Function2()
    {
        return 50;
    }

public:
    // accessble for everyone outside /inside /and classes inherits this class.
    string firstName;
    string lastName;

    string FullName()
    {
        return firstName + " " + lastName;
    }

    float Function3()
    {
        return Function1() * variable1 * variable2;
    }
};

int main()
{
    WelcomeMessage();

    clsPerson person1;

    person1.firstName = "Kifah";
    person1.lastName = "Saloum";
    cout << "person1: " << person1.FullName() << endl;

    cout << person1.Function3();

    cout << endl
         << endl;

    return 0;
}