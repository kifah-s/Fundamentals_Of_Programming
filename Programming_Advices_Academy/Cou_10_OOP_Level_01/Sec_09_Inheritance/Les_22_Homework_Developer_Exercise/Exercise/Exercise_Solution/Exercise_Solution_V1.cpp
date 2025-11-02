#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Exercise ..\n"
         << endl;
}

class clsPerson
{
private:
    int _ID;
    string _firstName;
    string _lastName;
    string _email;
    string _phone;

public:
    clsPerson(int id, string firstName, string lastName, string email, string phone)
    {
        _ID = id;
        _firstName = firstName;
        _lastName = lastName;
        _email = email;
        _phone = phone;
    }

    // Read Only Property
    int GetID()
    {
        return _ID;
    }

    // Property Set and Get.
    void SetFirstName(string firstName) { _firstName = firstName; }
    string GetFirstName() { return _firstName; }

    void SetLastName(string lastName) { _lastName = lastName; }
    string GetLastName() { return _lastName; }

    string GetFullName() { return _firstName + " " + _lastName; }

    void SetEmail(string email) { _email = email; }
    string GetEmail() { return _email; }

    void SetPhone(string phone) { _phone = phone; }
    string GetPhone() { return _phone; }

    void PrintInfo()
    {
        cout << "\nPerson Info:" << endl;
        cout << "___________________" << endl;
        cout << "ID       : " << _ID << endl;
        cout << "FirstName: " << _firstName << endl;
        cout << "LastName : " << _lastName << endl;
        cout << "Full Name: " << GetFullName() << endl;
        cout << "Email    : " << _email << endl;
        cout << "Phone    : " << _phone << endl;
        cout << "___________________" << endl;
    }

    void SendEmail(string subject, string body)
    {
        cout << "\nThe following message sent successfully to email: " << _email << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }

    void SendSMS(string textMessage)
    {
        cout << "\nThe following SMS sent successfully to phone: " << _phone << endl;
        cout << "Text Message: " << textMessage << endl;
    }
};

class clsEmployee : public clsPerson
{
private:
    string _title;
    string _department;
    float _salary;

public:
    clsEmployee(int id, string firstName, string lastName, string email, string phone, string title, string department, float salary) : clsPerson(id, firstName, lastName, email, phone)
    {
        _title = title;
        _department = department;
        _salary = salary;
    }

    // Property Set and Get.
    void setTitle(string Title) { _title = Title; }
    string GetTitle() { return _title; }

    void SetDepartment(string department) { _department = department; }
    string GetDepartment() { return _department; }

    void SetSalary(float salary) { _salary = salary; }
    float GetSalary() { return _salary; }

    void PrintInfo()
    {
        // clsPerson::PrintInfo();

        cout << "Employee Info:" << endl;
        cout << "___________________" << endl;
        cout << "ID        : " << clsPerson::GetID() << endl;
        cout << "FirstName : " << clsPerson::GetFirstName() << endl;
        cout << "LastName  : " << clsPerson::GetLastName() << endl;
        cout << "Full Name : " << clsPerson::GetFullName() << endl;
        cout << "Email     : " << clsPerson::GetEmail() << endl;
        cout << "Phone     : " << clsPerson::GetPhone() << endl;

        cout << "Title     : " << GetTitle() << endl;
        cout << "Department: " << GetDepartment() << endl;
        cout << "Salary    : " << GetSalary() << endl;
        cout << "___________________" << endl;
    }
};

class clsDeveloper : public clsEmployee
{
private:
    string _mainProgrammingLanguage;

public:
    clsDeveloper(int id, string firstName, string lastName, string email, string phone, string title, string department, float salary, string mainProgrammingLanguage) : clsEmployee(id, firstName, lastName, email, phone, title, department, salary)
    {
        _mainProgrammingLanguage = mainProgrammingLanguage;
    }

    // Set and Get Properties.
    void SetMainProgrammingLanguage(string mainProgrammingLanguage) { _mainProgrammingLanguage = mainProgrammingLanguage; }
    string GetMainProgrammingLanguage() { return _mainProgrammingLanguage; }

    void PrintInfo()
    {
        cout << "Developer Info:" << endl;
        cout << "___________________" << endl;
        cout << "ID        : " << clsPerson::GetID() << endl;
        cout << "FirstName : " << clsPerson::GetFirstName() << endl;
        cout << "LastName  : " << clsPerson::GetLastName() << endl;
        cout << "Full Name : " << clsPerson::GetFullName() << endl;
        cout << "Email     : " << clsPerson::GetEmail() << endl;
        cout << "Phone     : " << clsPerson::GetPhone() << endl;

        cout << "Title     : " << clsEmployee::GetTitle() << endl;
        cout << "Department: " << clsEmployee::GetDepartment() << endl;
        cout << "Salary    : " << clsEmployee::GetSalary() << endl;
        
        cout << "Main Programming Language: " << GetMainProgrammingLanguage() << endl;
        cout << "___________________" << endl;
    }
};

int main()
{
    WelcomeMessage();

    // clsPerson person1(1, "kifah", "saloum", "kifah@gmail.com", "00963998621421");
    // person1.PrintInfo();

    // clsEmployee employee1(10, "kifah", "saloum", "kifah@gmail.com", "00963998621421", "CEO", "ProgrammingAdvices", 5000);
    // employee1.PrintInfo();

    clsDeveloper developer1(10, "kifah", "saloum", "kifah@gmail.com", "00963998621421", "CEO", "ProgrammingAdvices", 5000, "C++");
    developer1.PrintInfo();

    cout << endl
         << endl;

    return 0;
}