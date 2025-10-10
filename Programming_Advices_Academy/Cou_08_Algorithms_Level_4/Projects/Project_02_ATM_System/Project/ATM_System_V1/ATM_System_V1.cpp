#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

const string clientsFileName = "clients.txt";

struct stClient
{
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    double accountBalance;
    bool markForDelete = false;
};

stClient currentClient;

enum enClientInformation
{
    clientInfo_accountNumber = 0,
    clientInfo_pinCode = 1,
    clientInfo_name = 2,
    clientInfo_phone = 3,
    clientInfo_accountBalance = 4
};

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

vector<string> SplitString(string s1, string delim)
{
    vector<string> vecString;

    short pos = 0;
    string sWord; // define a string variable

    // Use find() function to get the position of the delimiters.
    while ((pos = s1.find(delim)) != std::string::npos)
    {
        sWord = s1.substr(0, pos); // Store the word.

        if (sWord != "")
        {
            vecString.push_back(sWord);
        }

        s1.erase(0, pos + delim.length()); // Erase() until postion and move to next word.
    }

    if (s1 != "")
    {
        vecString.push_back(s1); // It adds last word of the string.
    }

    return vecString;
}

stClient ConvertClientLinetoRecord(string line, string separator = "#//#")
{
    stClient client;
    vector<string> vecClientData;

    vecClientData = SplitString(line, separator);

    client.accountNumber = vecClientData[enClientInformation::clientInfo_accountNumber];
    client.pinCode = vecClientData[enClientInformation::clientInfo_pinCode];
    client.name = vecClientData[enClientInformation::clientInfo_name];
    client.phone = vecClientData[enClientInformation::clientInfo_phone];
    client.accountBalance = stod(vecClientData[enClientInformation::clientInfo_accountBalance]); // Cast string to double.

    return client;
}

vector<stClient> LoadClientsDataFromFile(string fileName)
{
    vector<stClient> vecClients;

    fstream myFile;
    myFile.open(fileName, ios::in); // Read Mode.

    if (myFile.is_open())
    {
        string line;
        stClient client;

        while (getline(myFile, line))
        {
            client = ConvertClientLinetoRecord(line);

            vecClients.push_back(client);
        }

        myFile.close();
    }

    return vecClients;
}

bool FindClientByAccountNumberAndPinCode(string accountNumber, string pinCode, stClient &client)
{
    vector<stClient> vecClients = LoadClientsDataFromFile(clientsFileName);

    for (stClient &c : vecClients)
    {
        if (c.accountNumber == accountNumber && c.pinCode == pinCode)
        {
            client = c;

            return true;
        }
    }

    return false;
}

bool LoadClientInfo(string accountNumber, string pinCode)
{
    if (FindClientByAccountNumberAndPinCode(accountNumber, pinCode, currentClient))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void LoginScreen()
{
    cout << "\n---------------------------------\n";
    cout << "\tLogin Screen";
    cout << "\n---------------------------------\n";
}

string ReadAccountNumber()
{
    string accountNumber;

    cout << "Please, enter account number: ";
    cin >> accountNumber;

    return accountNumber;
}

string ReadPinCode()
{
    string pinCode;

    cout << "Please, Enter pin code: ";
    cin >> pinCode;

    return pinCode;
}

void Login()
{
    bool loginFailed = false;
    string accountNumber, pinCode;

    do
    {
        LoginScreen();

        if (loginFailed)
        {
            cout << "\nInvalid account number / pin code !!\n\n";
        }

        accountNumber = ReadAccountNumber();
        pinCode = ReadPinCode();

        loginFailed = !LoadClientInfo(accountNumber, pinCode);

    } while (loginFailed);

    // ShowMainMenu();
}

int main()
{
    WelcomeMessage();

    Login();

    cout << endl
         << endl;

    return 0;
}