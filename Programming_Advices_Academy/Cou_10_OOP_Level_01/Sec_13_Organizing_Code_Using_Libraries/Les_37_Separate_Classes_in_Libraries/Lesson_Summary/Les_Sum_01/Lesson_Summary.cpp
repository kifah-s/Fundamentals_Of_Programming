//* Code Before Separation.

#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

class clsPerson
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    // Read Only Property.
    int GetID() { return _ID; }

    // Properties Set and Get.
    void SetFirstName(string FirstName) { _FirstName = FirstName; }
    string GetFirstName() { return _FirstName; }

    void SetLastName(string LastName) { _LastName = LastName; }
    string GetLastName() { return _LastName; }

    void SetEmail(string Email) { _Email = Email; }
    string GetEmail() { return _Email; }

    void SetPhone(string Phone) { _Phone = Phone; }
    string GetPhone() { return _Phone; }

    string GetFullName() { return _FirstName + " " + _LastName; }

    void Print()
    {
        cout << "Info:" << endl;
        cout << "___________________" << endl;
        cout << "ID       : " << _ID << endl;
        cout << "FirstName: " << _FirstName << endl;
        cout << "LastName : " << _LastName << endl;
        cout << "Full Name: " << GetFullName() << endl;
        cout << "Email    : " << _Email << endl;
        cout << "Phone    : " << _Phone << endl;
        cout << "___________________" << endl;
    }

    void SendEmail(string Subject, string Body)
    {

        cout << "\nThe following message sent successfully to email: " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }

    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS sent successfully to phone: " << _Phone << endl;
        cout << TextMessage << endl;
    }
};

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
        cout << "___________________";
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

int main()
{
    WelcomeMessage();

    clsEmployee Employee1(10, "Mohammed", "Abu-Hadhoud", "A@a.com", "8298982", "CEO", "ProgrammingAdvices", 5000);
    Employee1.Print();

    cout << endl
         << endl;

    return 0;
}