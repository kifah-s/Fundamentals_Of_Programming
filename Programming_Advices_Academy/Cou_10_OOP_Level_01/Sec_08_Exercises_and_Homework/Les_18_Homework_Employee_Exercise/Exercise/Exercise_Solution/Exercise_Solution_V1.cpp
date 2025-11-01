#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

class clsEmployee
{
private:
    int _ID;
    string _firstName;
    string _lastName;
    string _title;
    string _email;
    string _phone;
    string _salary;
    string _department;

public:
    clsEmployee(int id, string firstName, string lastName, string title, string email, string phone, string salary, string department)
    {
        _ID = id;
        _firstName = firstName;
        _lastName = lastName;
        _title = title;
        _email = email;
        _phone = phone;
        _salary = salary;
        _department = department;
    }

    // Read Only.
    int GetID()
    {
        return _ID;
    }

    void SetFirstName(string firstName)
    {
        _firstName = firstName;
    }
    string GetFirstName()
    {
        return _firstName;
    }

    void SetLastName(string lastName)
    {
        _lastName = lastName;
    }
    string GetlastName()
    {
        return _lastName;
    }

    string GetFullName()
    {
        return _firstName + " " + _lastName;
    }

    void SetTitle(string title)
    {
        _title = title;
    }
    string GetTitle()
    {
        return _title;
    }

    void SetEmail(string email)
    {
        _email = email;
    }
    string GetEmail()
    {
        return _email;
    }

    void SetPhone(string phone)
    {
        _phone = phone;
    }
    string GetPhone()
    {
        return _phone;
    }

    void SetSalary(string salary)
    {
        _salary = salary;
    }
    string GetSalary()
    {
        return _salary;
    }
    
    void SetDepartment(string department)
    {
        _department = department;
    }
    string GetDepartment()
    {
        return _department;
    }

    void PrintInfo()
    {
        cout << "Info: " << endl;
        cout << "--------------------------" << endl;
        cout << "ID: " << _ID << endl;
        cout << "First Name: " << _firstName << endl;
        cout << "Last Name: " << _lastName << endl;
        cout << "Full Name: " << GetFullName() << endl;
        cout << "Title: " << _title << endl;
        cout << "Email: " << _email << endl;
        cout << "Phone: " << _phone << endl;
        cout << "Salary: " << _salary << endl;
        cout << "Department: " << _department << endl;
        cout << "--------------------------" << endl;
    }

    void SendEmail(string sub, string body)
    {
        cout << "The following message sent successfully to email: " << _email << endl;
        cout << "Subject: " << sub << endl;
        cout << "Body: " << body << endl;
    }

    void SendMessage(string sms)
    {
        cout << "\nThe following SMS sent successfully to phone: " << _phone << endl;
        cout << "Message: " << sms << endl;
    }
};

int main()
{
    WelcomeMessage();

    clsEmployee Employee1(10, "kifah", "saloum", "SE", "kifah@gmail.com", "0998621421", "1500$", "IT");
    Employee1.PrintInfo();
    Employee1.SendEmail("Hi", "How are you?");
    Employee1.SendMessage("How are you?");

    cout << endl
         << endl;

    return 0;
}