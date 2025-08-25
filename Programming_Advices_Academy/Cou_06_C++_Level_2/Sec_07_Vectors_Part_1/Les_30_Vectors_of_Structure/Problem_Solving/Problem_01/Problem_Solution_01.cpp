#include <iostream>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

struct stEmployee
{
    short employeeNumber = 0;
    string firstName = "";
    string lastName = "";
    float salary = 0.0;
};

void AddEmployee(vector<stEmployee> &employees)
{

    stEmployee tempEmployee;

    cout << "Employee Number: ";
    cin >> tempEmployee.employeeNumber;

    cout << "First Name: ";
    cin >> tempEmployee.firstName;

    cout << "last Name: ";
    cin >> tempEmployee.lastName;

    cout << "Salary: ";
    cin >> tempEmployee.salary;

    employees.push_back(tempEmployee);
}

void AddNewEmployee(vector<stEmployee> &employees)
{
    char answer = 'y';
    short employeeCounter = 1;

    do
    {
        cout << "Please, enter employee [ " << employeeCounter << " ] details: " << endl;

        AddEmployee(employees);

        employeeCounter++;

        cout << "Do you want a new employee ( y / n )? ";
        cin >> answer;

    } while (answer == 'y' || answer == 'Y');
}

void PrintEmployees(vector<stEmployee> &employees)
{
    AddNewEmployee(employees);

    cout << "\n\nEmployees Vector: " << endl;
    for (stEmployee &employee : employees)
    {
        cout << "Employee Number: " << employee.employeeNumber << endl;
        cout << "First Name: " << employee.firstName << endl;
        cout << "Last Name: " << employee.lastName << endl;
        cout << "Salary: " << employee.salary << endl;
        cout << "------------------------------------" << endl;
    }
}

int main()
{
    WelcomeMessage();

    vector<stEmployee> vecEmployees;

    PrintEmployees(vecEmployees);

    cout << endl
         << endl;

    return 0;
}