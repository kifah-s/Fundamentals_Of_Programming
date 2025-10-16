#include <iostream>

using namespace std;

struct stEmployee
{
    string name = "";
    float salary = 0;
};

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    stEmployee employee_1;

    employee_1.name = "kifah saloum";
    employee_1.salary = 1000;

    cout << "Employee Name: " << employee_1.name << endl;
    cout << "Employee Salary: " << employee_1.salary << endl;

    cout << "\n---------------------------------\n\n";

    stEmployee *ptr_employee_1;
    ptr_employee_1 = &employee_1;

    cout << "Using Pointer: " << endl;
    cout << "Employee Name: " << ptr_employee_1->name << endl;
    cout << "Employee Salary: " << ptr_employee_1->salary << endl;

    cout << endl
         << endl;

    return 0;
}