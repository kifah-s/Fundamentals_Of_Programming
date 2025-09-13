#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord;

    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            vString.push_back(sWord);
        }

        S1.erase(0, pos + Delim.length());
    }

    if (S1 != "")
    {
        vString.push_back(S1);
    }
    return vString;
}

sClient ConvertLinetoRecord(string Line, string Separator = "#//#")
{
    sClient Client;
    vector<string> vClientData;

    vClientData = SplitString(Line, Separator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

vector<sClient> LoadClientsDataFromFile(string FileName)
{
    vector<sClient> vClients;

    fstream MyFile;
    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLinetoRecord(Line);
            vClients.push_back(Client);
        }

        MyFile.close();
    }

    return vClients;
}

string ReadAccountNumber()
{
    string accountNumber = "";

    cout << "Please, enter account number: ";
    cin >> accountNumber;

    return accountNumber;
}

void PrintAccountDetails(sClient client)
{
    cout << "\nThe following are the client details:" << endl;
    cout << "Account number: " << client.AccountNumber << endl;
    cout << "Pin Code: " << client.PinCode << endl;
    cout << "Name: " << client.Name << endl;
    cout << "Phone: " << client.Phone << endl;
    cout << "Account balance: " << client.AccountBalance << endl;
}

bool FindClientByAccountNumber(string AccountNumber, sClient &Client)
{
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    for (sClient C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }
    return false;
}

char WantDeleteThisClient()
{
    char answer = 'y';

    cout << "\nAre you sure you want delete this client (y / n): ";
    cin >> answer;

    return answer;
}

vector<sClient> DeleteClient(string AccountNumber)
{
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);

    for (short i = 0; i < vClients.size(); i++)
    {
        if (vClients[i].AccountNumber == AccountNumber)
        {
            vClients.erase(vClients.begin() + i);
        }
    }

    return vClients;
}

string ConvertRecordToLine(sClient Client, string Separator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Separator;
    stClientRecord += Client.PinCode + Separator;
    stClientRecord += Client.Name + Separator;
    stClientRecord += Client.Phone + Separator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
}

void AddTheNewDataToFile(vector<sClient> clients, string FileName)
{
    fstream file;
    file.open(FileName, ios::out);

    for (sClient &client : clients)
    {
        file << ConvertRecordToLine(client, "#//#") << endl;
    }

    file.close();
}

int main()
{
    WelcomeMessage();

    vector<sClient> clients;
    sClient Client;
    string AccountNumber = ReadAccountNumber();

    if (FindClientByAccountNumber(AccountNumber, Client))
    {
        PrintAccountDetails(Client);

        if (tolower(WantDeleteThisClient()) == 'y')
        {
            clients = DeleteClient(AccountNumber);
            cout << "\nClient Delete Successful." << endl;
            AddTheNewDataToFile(clients, ClientsFileName);
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
    }

    cout << endl
         << endl;

    return 0;
}