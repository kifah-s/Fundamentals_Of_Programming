#pragma once

#include <iostream>
#include "Lib_01_clsPerson.h"

using namespace std;

class clsEmployee : public clsPerson
{
private:
    string _Title;
    string _Department;
    float _Salary;

public:
    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary) : clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }

    // Properties Set and Get.
    void SetTitle(string Title) { _Title = Title; }
    string GetTitle() { return _Title; }

    void SetDepartment(string Department) { _Department = Department; }
    string GetDepartment() { return _Department; }

    void SetSalary(float Salary) { _Salary = Salary; }
    float GetSalary() { return _Salary; }

    void Print()
    {
        cout << "Info:" << endl;
        cout << "___________________" << endl;
        cout << "ID        : " << clsPerson::GetID() << endl;
        cout << "FirstName : " << clsPerson::GetFirstName() << endl;
        cout << "LastName  : " << clsPerson::GetLastName() << endl;
        cout << "Full Name : " << clsPerson::GetFullName() << endl;
        cout << "Email     : " << clsPerson::GetEmail() << endl;
        cout << "Phone     : " << clsPerson::GetPhone() << endl;

        cout << "\nTitle     : " << GetTitle() << endl;
        cout << "Department: " << GetDepartment() << endl;
        cout << "Salary    : " << GetSalary() << endl;
        cout << "___________________" << endl;
    }
};
