
//* Employee Class Program (Version 1).

/*
* Create a class named Employee with attributes name and salary.
* Include a method to give an annual raise of 10%.

! Output:
! Employee name: kifah saloum
! Employee salary: 1000$
! Employee salary after annual raise: 1100$
!
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
#include <cmath>

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
    string name;
    float salary;

public:
    // Getter.
    void getName(string n)
    {
        name = n;
    }

    void getSalary(float s)
    {
        salary = s;
    }

    // Setter.
    void printDetails()
    {
        cout << "Employee name: " << name << endl;
        cout << "Employee salary: " << salary << endl;
    }

    void annualRaise(float ar)
    {
        float percentage = (ar / 100.0) * salary;
        salary = salary + percentage;

        cout << "Employee salary after annual raise: " << salary << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Employee Class Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    Employee emp;

    // Call Functions.
    printWelcomeMessageFun();

    emp.getName("kifah saloum");
    emp.getSalary(1000);
    emp.printDetails();
    emp.annualRaise(10);

    cout << "\n"
         << endl;
}
//* End Function ..
