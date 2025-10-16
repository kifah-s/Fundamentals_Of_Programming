#include <iostream>
#include <string>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

struct stClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

stClient ReadNewClient()
{
    stClient client;

    cout << "Enter Account Number: ";
    getline(cin, client.AccountNumber);

    cout << "Enter PinCode: ";
    getline(cin, client.PinCode);

    cout << "Enter Name: ";
    getline(cin, client.Name);

    cout << "Enter Phone: ";
    getline(cin, client.Phone);

    cout << "Enter AccountBalance: ";
    cin >> client.AccountBalance;

    return client;
}

string ConvertRecordToLine(stClient Client, string Separator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Separator;
    stClientRecord += Client.PinCode + Separator;
    stClientRecord += Client.Name + Separator;
    stClientRecord += Client.Phone + Separator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
}

int main()
{
    WelcomeMessage();

    cout << "Please Enter Client Data:" << endl;

    stClient Client;
    
    Client = ReadNewClient();
    
    cout << "\n\nClient Record for Saving is: \n";
    cout << ConvertRecordToLine(Client);

    cout << endl
         << endl;

    return 0;
}