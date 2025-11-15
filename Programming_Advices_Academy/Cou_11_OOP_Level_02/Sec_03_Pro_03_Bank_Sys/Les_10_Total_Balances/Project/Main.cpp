#include <iostream>
#include <iomanip>

#include "Classes/Bank_System_Classes/clsPerson.h"
#include "Classes/Bank_System_Classes/clsBankClient.h"
#include "Classes/Public_Classes/clsInputValidate.h"
#include "Classes/Public_Classes/clsUtil.h"

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

void PrintClientRecordBalanceLine(clsBankClient Client)
{
    cout << "| " << setw(15) << left << Client.GetAccountNumber();
    cout << "| " << setw(40) << left << Client.GetFullName();
    cout << "| " << setw(12) << left << Client.GetAccountBalance();
}

void ShowTotalBalances()
{
    vector<clsBankClient> vClients = clsBankClient::GetClientsList();

    cout << "\n\t\t\t\t\tBalances List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;

    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;

    double TotalBalances = clsBankClient::GetTotalBalances();

    if (vClients.size() == 0)
    {
        cout << "\t\t\t\tNo Clients Available In the System!";
    }
    else
    {
        for (clsBankClient Client : vClients)
        {
            PrintClientRecordBalanceLine(Client);
            cout << endl;
        }
    }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;
    cout << "Total Balances = " << TotalBalances << endl;
    cout << "( " << clsUtil::NumberToText(TotalBalances) << ")";
}

int main()
{
    WelcomeMessage();

    ShowTotalBalances();

    cout << endl
         << endl;

    return 0;
}