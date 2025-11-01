#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

class clsPerson
{
private:
    int _ID;
    string _firstName;
    string _lastName;
    string _fullName;
    string _email;
    string _phone;

public:
    clsPerson(int id, string firstName, string lastName, string email, string phone)
    {
        _ID = id;
        _firstName = firstName;
        _lastName = lastName;
        _fullName = firstName + " " + lastName;
        _email = email;
        _phone = phone;
    }

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

    void SetFullName(string firstName, string lastName)
    {
        _fullName = firstName + " " + lastName;
    }
    string GetFullName()
    {
        return _fullName;
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

    void PrintInfo()
    {
        cout << "Info: " << endl;
        cout << "--------------------------" << endl;
        cout << "ID: " << _ID << endl;
        cout << "First Name: " << _firstName << endl;
        cout << "Last Name: " << _lastName << endl;
        cout << "Full Name: " << _fullName << endl;
        cout << "Email: " << _email << endl;
        cout << "Phone: " << _phone << endl;
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

    clsPerson person1(10, "kifah", "saloum", "kifah@gmail.com", "0998621421");
    person1.PrintInfo();
    person1.SendEmail("Hi", "How are you?");
    person1.SendMessage("How are you?");


    cout << endl
         << endl;

    return 0;
}