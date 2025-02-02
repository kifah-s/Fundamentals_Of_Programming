
//* Class Employee Program (Version 2).

/*
* Create a class named Employee with attributes name and salary.
* Include a method to give an annual raise of 10%.

! Output:
! kifah salary: 24000$
! New salary: 26400$
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
    string employeeName;
    float employeeSalary,  employeeNewSalary;

public:
    // Setter.
    void setEmployeeName(string empName)
    {
        employeeName = empName;
    }

    void setEmployeeSalary(float sa)
    {
        employeeSalary = sa;
    }

    // Getter.
    string getEmployeeName()
    {
        return employeeName;
    }

    float getEmployeeSalary()
    {
        return employeeSalary;
    }

    // void getAnnualRaise()
    // {
    //     annualRaise = employeeSalary * annualRaise;
    // }

    float getNewSalary()
    {
        float annualRaise = employeeSalary * 0.10;
        employeeNewSalary = employeeSalary + annualRaise;

        return employeeNewSalary;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Employee Program (Version 2) ..\n"
         << endl;
}

// Employee - Function.
void employeeFun()
{
    Employee employee_1;
    employee_1.setEmployeeName("kifah saloum");
    employee_1.setEmployeeSalary(24000);

    cout << employee_1.getEmployeeName() << ", salary: " << employee_1.getEmployeeSalary() << '$' << endl;

    // employee_1.getAnnualRaise();
    
    cout << "New Salary: " << employee_1.getNewSalary() << endl;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    employeeFun();

    cout << "\n"
         << endl;
}
//* End Function ..
