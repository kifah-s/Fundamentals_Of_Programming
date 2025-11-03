#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

class clsEmployee
{
public:
    int ID;
    string Name;
    float Salary;

    clsEmployee(int ID, string Name, float Salary)
    {
        this->ID = ID;
        this->Name = Name;
        this->Salary = Salary;
    }

    void Print()
    {
        cout << ID << "  " << Name << "  " << Salary << endl;
        // cout << this->ID << "  " << this->Name << "  " << this->Salary << endl;
    }

    static void Func1(clsEmployee Employee)
    {
        Employee.Print();
    }

    void Func2()
    {
        Func1(*this);
    }
};

int main()
{
    WelcomeMessage();

    clsEmployee Employee1(101, "Ali", 5000);
    Employee1.Print();
    Employee1.Func2();

    cout << endl
         << endl;

    return 0;
}