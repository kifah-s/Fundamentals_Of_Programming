#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

class clsPerson
{
public:
    string FullName = "Mohammed Abu-Hadhoud";
};

class clsEmployee : public clsPerson
{
public:
    string Title = "CEO";
};

int main()
{
    WelcomeMessage();

    clsEmployee Employee1;
    cout << Employee1.FullName << endl;

    //* upcasting: this will convert employee to person.
    // clsPerson *Person1 = &Employee1;
    // cout << Person1->FullName << endl;

    // clsPerson Person2;
    // cout << Person2.FullName << endl;

    //! downcasting: you cannot convert person to employee.
    // clsEmployee *Employee2 = &Person2;

    cout << endl
         << endl;

    return 0;
}