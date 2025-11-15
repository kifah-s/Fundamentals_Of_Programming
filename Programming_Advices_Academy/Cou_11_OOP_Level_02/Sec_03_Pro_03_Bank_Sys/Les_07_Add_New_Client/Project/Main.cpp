#include <iostream>

#include "Classes/Bank_System_Classes/clsPerson.h"
#include "Classes/Bank_System_Classes/clsBankClient.h"
#include "Classes/Public_Classes/clsInputValidate.h"

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

void ReadClientInfo(clsBankClient &Client)
{
    cout << "\nEnter FirstName: ";
    Client.SetFirstName(clsInputValidate::ReadString());

    cout << "\nEnter LastName: ";
    Client.SetLastName(clsInputValidate::ReadString());

    cout << "\nEnter Email: ";
    Client.SetEmail(clsInputValidate::ReadString());

    cout << "\nEnter Phone: ";
    Client.SetPhone(clsInputValidate::ReadString());

    cout << "\nEnter PinCode: ";
    Client.SetPinCode(clsInputValidate::ReadString());

    cout << "\nEnter Account Balance: ";
    Client.SetAccountBalance(clsInputValidate::ReadFloatNumber());
}

void AddNewClient()
{
    string AccountNumber = "";

    cout << "\nPlease Enter Account Number: ";
    AccountNumber = clsInputValidate::ReadString();

    while (clsBankClient::IsClientExist(AccountNumber))
    {
        cout << "\nAccount Number Is Already Used, Choose another one: ";
        AccountNumber = clsInputValidate::ReadString();
    }

    clsBankClient NewClient = clsBankClient::GetAddNewClientObject(AccountNumber);

    ReadClientInfo(NewClient);

    clsBankClient::enSaveResults SaveResult;

    SaveResult = NewClient.Save();

    switch (SaveResult)
    {
    case clsBankClient::enSaveResults::svSucceeded:
    {
        cout << "\nAccount Added Successfully :-)\n";
        NewClient.Print();
        break;
    }
    case clsBankClient::enSaveResults::svFailedEmptyObject:
    {
        cout << "\nError account was not saved because it's Empty";
        break;
    }
    case clsBankClient::enSaveResults::svFailedAccountNumberExists:
    {
        cout << "\nError account was not saved because account number is used!\n";
        break;
    }
    }
}

int main()
{
    WelcomeMessage();

    AddNewClient();

    cout << endl
         << endl;

    return 0;
}