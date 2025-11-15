#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "../Public_Classes/clsString.h"
#include "clsPerson.h"

using namespace std;

class clsBankClient : public clsPerson
{
private:
    enum enMode
    {
        EmptyMode = 0,
        UpdateMode = 1
    } _Mode;

    string _AccountNumber;
    string _PinCode;
    float _AccountBalance;

    static clsBankClient _ConvertLineToClientObject(string Line, string Separator = "#//#")
    {
        vector<string> vClientData;

        vClientData = clsString::Split(Line, Separator);

        return clsBankClient(enMode::UpdateMode, vClientData[0], vClientData[1], vClientData[2], vClientData[3], vClientData[4], vClientData[5], stod(vClientData[6]));
    }

    static clsBankClient _GetEmptyClientObject()
    {
        return clsBankClient(enMode::EmptyMode, "", "", "", "", "", "", 0);
    }

public:
    // Constructor.
    clsBankClient(enMode Mode, string FirstName, string LastName, string Email, string Phone, string AccountNumber, string PinCode, float AccountBalance) : clsPerson(FirstName, LastName, Email, Phone)
    {
        _Mode = Mode;
        _AccountNumber = AccountNumber;
        _PinCode = PinCode;
        _AccountBalance = AccountBalance;
    }

    // Setters and Getters.
    string GetAccountNumber() { return _AccountNumber; }

    void SetPinCode(string PinCode) { _PinCode = PinCode; }
    string GetPinCode() { return _PinCode; }

    void SetAccountBalance(float AccountBalance) { _AccountBalance = AccountBalance; }
    float GetAccountBalance() { return _AccountBalance; }

    bool IsEmpty()
    {
        return (_Mode == enMode::EmptyMode);
    }

    void Print()
    {
        cout << "\nClint Card: " << endl;
        cout << "-------------------------------" << endl;
        cout << "First Name: " << clsPerson::GetFirstName() << endl;
        cout << "Last Name: " << clsPerson::GetLastName() << endl;
        cout << "Full Name: " << clsPerson::GetFullName() << endl;
        cout << "Email: " << clsPerson::GetEmail() << endl;
        cout << "Phone: " << clsPerson::GetPhone() << endl;
        cout << "Account Number: " << GetAccountNumber() << endl;
        cout << "Pin Code: " << GetPinCode() << endl;
        cout << "Account Balance: " << GetAccountBalance() << endl;
        cout << "-------------------------------" << endl;
    }

    static clsBankClient Find(string AccountNumber)
    {
        vector<clsBankClient> vClients;

        fstream MyFile;
        MyFile.open("Database/Clients.txt", ios::in); // Read Mode.

        if (MyFile.is_open())
        {
            string Line;

            while (getline(MyFile, Line))
            {
                clsBankClient Client = _ConvertLineToClientObject(Line);

                if (Client.GetAccountNumber() == AccountNumber)
                {
                    MyFile.close();

                    return Client;
                }
                vClients.push_back(Client);
            }
            MyFile.close();
        }
        return _GetEmptyClientObject();
    }

    static clsBankClient Find(string AccountNumber, string PinCode)
    {
        fstream MyFile;
        MyFile.open("Database/Clients.txt", ios::in); // Read Mode.

        if (MyFile.is_open())
        {
            string Line;

            while (getline(MyFile, Line))
            {
                clsBankClient Client = _ConvertLineToClientObject(Line);

                if (Client.GetAccountNumber() == AccountNumber && Client.GetPinCode() == PinCode)
                {
                    MyFile.close();
                    return Client;
                }
            }
            MyFile.close();
        }
        return _GetEmptyClientObject();
    }

    static bool IsClientExist(string AccountNumber)
    {
        clsBankClient Client1 = clsBankClient::Find(AccountNumber);

        return (!Client1.IsEmpty());
    }
};