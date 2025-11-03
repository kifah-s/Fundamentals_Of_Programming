#pragma once

#include <iostream>

using namespace std;

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
