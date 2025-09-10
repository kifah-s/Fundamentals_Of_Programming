#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

struct stClient
{
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    double accountBalance;
};

stClient ReadNewClient()
{
    stClient client;

    cout << "Enter Account Number: ";
    getline(cin >> ws, client.accountNumber);

    cout << "Enter PinCode: ";
    getline(cin, client.pinCode);

    cout << "Enter Name: ";
    getline(cin, client.name);

    cout << "Enter Phone: ";
    getline(cin, client.phone);

    cout << "Enter Account Balance: ";
    cin >> client.accountBalance;

    return client;
}

string ConvertRecordToLine(stClient client, string separator = "#//#")
{
    string clientRecordInLine = "";

    clientRecordInLine += client.accountNumber + separator;
    clientRecordInLine += client.pinCode + separator;
    clientRecordInLine += client.name + separator;
    clientRecordInLine += client.phone + separator;
    clientRecordInLine += to_string(client.accountBalance);

    return clientRecordInLine;
}

void SaveDataInFile(string clientRecordInLine)
{
    fstream file("clientsData.txt", ios::app);

    if (file.is_open())
    {
        file << clientRecordInLine << endl;

        file.close();

        cout << "\nAdded successfully." << endl;
    }
    else
    {
        cout << "\nFile opening failed." << endl;
    }
}

void AddMoreClients()
{
    char answer = 'y';

    do
    {
        stClient client;
        string clientRecordInLine = "";

        cout << "\nPlease Enter Client Data:" << endl;

        client = ReadNewClient();
        clientRecordInLine = ConvertRecordToLine(client);
        SaveDataInFile(clientRecordInLine);

        cout << "\nDo You Want To Add More Clients (y / n): ";
        cin >> answer;
    } while (tolower(answer) == 'y');
}

int main()
{
    WelcomeMessage();
    AddMoreClients();

    cout << endl
         << endl;

    return 0;
}