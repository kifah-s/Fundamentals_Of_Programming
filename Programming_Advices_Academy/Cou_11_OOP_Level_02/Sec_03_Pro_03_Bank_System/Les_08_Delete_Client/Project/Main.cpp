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

void DeleteClient()
{
    string AccountNumber = "";

    cout << "\nPlease Enter Account Number: ";
    AccountNumber = clsInputValidate::ReadString();

    while (!clsBankClient::IsClientExist(AccountNumber))
    {
        cout << "\nAccount number is not found, choose another one: ";
        AccountNumber = clsInputValidate::ReadString();
    }

    clsBankClient Client1 = clsBankClient::Find(AccountNumber);
    Client1.Print();

    cout << "\nAre you sure you want to delete this client y/n? ";

    char Answer = 'n';
    cin >> Answer;

    if (Answer == 'y' || Answer == 'Y')
    {
        if (Client1.Delete())
        {
            cout << "\nClient Deleted Successfully :-)\n";
            Client1.Print();
        }
        else
        {
            cout << "\nError Client Was not Deleted\n";
        }
    }
}

int main()
{
    WelcomeMessage();

    DeleteClient();

    cout << endl
         << endl;

    return 0;
}