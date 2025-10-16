#include <iostream>
#include <vector>

using namespace std;

struct stEmployee
{
    int employeeNumber = 0;
    string firstName = " ";
    string lastName = " ";
    float salary = 0.0;
};

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    // vector<stEmployee> vecEmployees = {{1, "kifah", "saloum", 2000},
    //                                    {2, "shaza", "kadaj", 1500},
    //                                    {3, "mayar", "altawel", 1000}};

    vector<stEmployee> vecEmployees;

    stEmployee tempEmployee;

    tempEmployee.employeeNumber = 1;
    tempEmployee.firstName = "a";
    tempEmployee.lastName = "a";
    tempEmployee.salary = 100;
    vecEmployees.push_back(tempEmployee);

    tempEmployee.employeeNumber = 2;
    tempEmployee.firstName = "b";
    tempEmployee.lastName = "b";
    tempEmployee.salary = 200;
    vecEmployees.push_back(tempEmployee);

    tempEmployee.employeeNumber = 3;
    tempEmployee.firstName = "c";
    tempEmployee.lastName = "c";
    tempEmployee.salary = 300;
    vecEmployees.push_back(tempEmployee);

    cout << "Employee Vector: \n"
         << endl;
    for (stEmployee &employee : vecEmployees)
    {
        cout << "Employee number: " << employee.employeeNumber << endl;
        cout << "First name: " << employee.firstName << endl;
        cout << "Last name: " << employee.lastName << endl;
        cout << "Salary: " << employee.salary << endl;
        cout << "------------------------------" << endl;
    }

    cout << endl
         << endl;

    return 0;
}