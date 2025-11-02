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
    // void Print()
    // {
    //     cout << "Hi, i'm a person!\n ";
    // }
    
    virtual void Print()
    {
        cout << "Hi, i'm a person!\n ";
    }
};

class clsEmployee : public clsPerson
{
public:
    void Print()
    {
        cout << "Hi, I'm an Employee\n";
    }
};

class clsStudent : public clsPerson
{
public:
    void Print()
    {
        cout << "Hi, I'm a student\n";
    }
};

int main()
{
    WelcomeMessage();

    clsEmployee Employee1;
    clsStudent Student1;
    Employee1.Print();
    Student1.Print();

    clsPerson *Person1 = &Employee1;
    clsPerson *Person2 = &Student1;
    Person1->Print();
    Person2->Print();

    cout << endl
         << endl;

    return 0;
}