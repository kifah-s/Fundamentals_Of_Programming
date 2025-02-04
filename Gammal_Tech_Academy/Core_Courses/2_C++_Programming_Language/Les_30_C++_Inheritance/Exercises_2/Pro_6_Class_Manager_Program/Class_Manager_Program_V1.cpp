
//* Class Manager Program (Version 1).

/*
* Create a program using inheritance.
* Define a base class Employee with attributes employeeId and salary,
* and a method displayInfo to display the employee's information.
* Derive a class Manager from Employee with an additional attribute department,
* and a method displayDepartment to display the manager's department.
* Get details from the user for both the employee and the manager.

! Input:
! Please, enter the employee details:
! Please, enter employee ID: 123
! Please, enter employee Salary: 5000$

! Please, enter the manger details:
! Please, enter Department: HR

! Output:
! Employee ID: 123, Employee Salary: 5000$
! Department: HR
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Classes ..
class Employee
{
private:
    int employeeID;
    float salary;

public:
    // Setter.
    void setEmployeeID()
    {
        cout << "Please, enter the employee details:" << endl;
        cout << "Please, enter employee ID: ";
        cin >> employeeID;
    }

    void setSalary()
    {
        cout << "Please, enter employee Salary: ";
        cin >> salary;
    }

    // Getter.
    void displayInfo()
    {
        cout << "\nEmployee ID: " << employeeID << ", Salary: " << salary << "$" << endl;
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    // Setter.
    void setDepartment()
    {
        cout << "\nPlease, enter the manger details: " << endl;
        cout << "Please, enter Department: ";
        cin >> department;
    }

    // Getter.
    void displayDepartment()
    {
        cout << "Department: " << department << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Manager Program (Version 1) ..\n"
         << endl;
}

// Manager - Function.
void ManagerFun()
{
    Manager m1;

    m1.setEmployeeID();
    m1.setSalary();
    m1.setDepartment();
    m1.displayInfo();
    m1.displayDepartment();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    ManagerFun();

    cout << "\n"
         << endl;
}
//* End Function ..
